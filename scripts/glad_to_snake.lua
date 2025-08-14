-- Converts CamelCase to snake_case
local function camel_to_snake(str)
	local s = str:gsub("(%l)(%u)", "%1_%2")
	s = s:gsub("(%u)(%u%l)", "%1_%2") -- handle acronym boundaries
	return s:lower()
end

-- Replace all glad_glSomething with gl_something
local function replace_glad_gl()
	local lines = vim.api.nvim_buf_get_lines(0, 0, -1, false)
	for i, line in ipairs(lines) do
		lines[i] = line:gsub("glad_gl([A-Za-z0-9_]+)", function(rest)
			return "gl_" .. camel_to_snake(rest)
		end)
	end
	vim.api.nvim_buf_set_lines(0, 0, -1, false, lines)
end

-- Call with:
replace_glad_gl()
