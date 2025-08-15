/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <glext/gl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef GLEXT_IMPL_UTIL_C_
#define GLEXT_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLEXT_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLEXT_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLEXT_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif

int GLEXT_GL_VERSION_1_0 = 0;
int GLEXT_GL_VERSION_1_1 = 0;
int GLEXT_GL_VERSION_1_2 = 0;
int GLEXT_GL_VERSION_1_3 = 0;
int GLEXT_GL_VERSION_1_4 = 0;
int GLEXT_GL_VERSION_1_5 = 0;
int GLEXT_GL_VERSION_2_0 = 0;
int GLEXT_GL_VERSION_2_1 = 0;
int GLEXT_GL_VERSION_3_0 = 0;
int GLEXT_GL_VERSION_3_1 = 0;
int GLEXT_GL_VERSION_3_2 = 0;
int GLEXT_GL_VERSION_3_3 = 0;
int GLEXT_GL_ARB_base_instance = 0;
int GLEXT_GL_ARB_draw_indirect = 0;
int GLEXT_GL_ARB_explicit_uniform_location = 0;
int GLEXT_GL_ARB_map_buffer_alignment = 0;
int GLEXT_GL_ARB_multi_draw_indirect = 0;
int GLEXT_GL_ARB_separate_shader_objects = 0;
int GLEXT_GL_ARB_shading_language_420pack = 0;
int GLEXT_GL_ARB_texture_buffer_range = 0;
int GLEXT_GL_ARB_texture_storage = 0;
int GLEXT_GL_ARB_vertex_attrib_binding = 0;

PFNGLACTIVESHADERPROGRAMPROC gl_active_shader_program = NULL;
PFNGLACTIVETEXTUREPROC gl_active_texture = NULL;
PFNGLATTACHSHADERPROC gl_attach_shader = NULL;
PFNGLBEGINCONDITIONALRENDERPROC gl_begin_conditional_render = NULL;
PFNGLBEGINQUERYPROC gl_begin_query = NULL;
PFNGLBEGINTRANSFORMFEEDBACKPROC gl_begin_transform_feedback = NULL;
PFNGLBINDATTRIBLOCATIONPROC gl_bind_attrib_location = NULL;
PFNGLBINDBUFFERPROC gl_bind_buffer = NULL;
PFNGLBINDBUFFERBASEPROC gl_bind_buffer_base = NULL;
PFNGLBINDBUFFERRANGEPROC gl_bind_buffer_range = NULL;
PFNGLBINDFRAGDATALOCATIONPROC gl_bind_frag_data_location = NULL;
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC gl_bind_frag_data_location_indexed = NULL;
PFNGLBINDFRAMEBUFFERPROC gl_bind_framebuffer = NULL;
PFNGLBINDPROGRAMPIPELINEPROC gl_bind_program_pipeline = NULL;
PFNGLBINDRENDERBUFFERPROC gl_bind_renderbuffer = NULL;
PFNGLBINDSAMPLERPROC gl_bind_sampler = NULL;
PFNGLBINDTEXTUREPROC gl_bind_texture = NULL;
PFNGLBINDVERTEXARRAYPROC gl_bind_vertex_array = NULL;
PFNGLBINDVERTEXBUFFERPROC gl_bind_vertex_buffer = NULL;
PFNGLBLENDCOLORPROC gl_blend_color = NULL;
PFNGLBLENDEQUATIONPROC gl_blend_equation = NULL;
PFNGLBLENDEQUATIONSEPARATEPROC gl_blend_equation_separate = NULL;
PFNGLBLENDFUNCPROC gl_blend_func = NULL;
PFNGLBLENDFUNCSEPARATEPROC gl_blend_func_separate = NULL;
PFNGLBLITFRAMEBUFFERPROC gl_blit_framebuffer = NULL;
PFNGLBUFFERDATAPROC gl_buffer_data = NULL;
PFNGLBUFFERSUBDATAPROC gl_buffer_sub_data = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC gl_check_framebuffer_status = NULL;
PFNGLCLAMPCOLORPROC gl_clamp_color = NULL;
PFNGLCLEARPROC gl_clear = NULL;
PFNGLCLEARBUFFERFIPROC gl_clear_bufferfi = NULL;
PFNGLCLEARBUFFERFVPROC gl_clear_bufferfv = NULL;
PFNGLCLEARBUFFERIVPROC gl_clear_bufferiv = NULL;
PFNGLCLEARBUFFERUIVPROC gl_clear_bufferuiv = NULL;
PFNGLCLEARCOLORPROC gl_clear_color = NULL;
PFNGLCLEARDEPTHPROC gl_clear_depth = NULL;
PFNGLCLEARSTENCILPROC gl_clear_stencil = NULL;
PFNGLCLIENTWAITSYNCPROC gl_client_wait_sync = NULL;
PFNGLCOLORMASKPROC gl_color_mask = NULL;
PFNGLCOLORMASKIPROC gl_color_maski = NULL;
PFNGLCOMPILESHADERPROC gl_compile_shader = NULL;
PFNGLCOMPRESSEDTEXIMAGE1DPROC gl_compressed_tex_image1d = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC gl_compressed_tex_image2d = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DPROC gl_compressed_tex_image3d = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC gl_compressed_tex_sub_image1d = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC gl_compressed_tex_sub_image2d = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC gl_compressed_tex_sub_image3d = NULL;
PFNGLCOPYBUFFERSUBDATAPROC gl_copy_buffer_sub_data = NULL;
PFNGLCOPYTEXIMAGE1DPROC gl_copy_tex_image1d = NULL;
PFNGLCOPYTEXIMAGE2DPROC gl_copy_tex_image2d = NULL;
PFNGLCOPYTEXSUBIMAGE1DPROC gl_copy_tex_sub_image1d = NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC gl_copy_tex_sub_image2d = NULL;
PFNGLCOPYTEXSUBIMAGE3DPROC gl_copy_tex_sub_image3d = NULL;
PFNGLCREATEPROGRAMPROC gl_create_program = NULL;
PFNGLCREATESHADERPROC gl_create_shader = NULL;
PFNGLCREATESHADERPROGRAMVPROC gl_create_shader_programv = NULL;
PFNGLCULLFACEPROC gl_cull_face = NULL;
PFNGLDELETEBUFFERSPROC gl_delete_buffers = NULL;
PFNGLDELETEFRAMEBUFFERSPROC gl_delete_framebuffers = NULL;
PFNGLDELETEPROGRAMPROC gl_delete_program = NULL;
PFNGLDELETEPROGRAMPIPELINESPROC gl_delete_program_pipelines = NULL;
PFNGLDELETEQUERIESPROC gl_delete_queries = NULL;
PFNGLDELETERENDERBUFFERSPROC gl_delete_renderbuffers = NULL;
PFNGLDELETESAMPLERSPROC gl_delete_samplers = NULL;
PFNGLDELETESHADERPROC gl_delete_shader = NULL;
PFNGLDELETESYNCPROC gl_delete_sync = NULL;
PFNGLDELETETEXTURESPROC gl_delete_textures = NULL;
PFNGLDELETEVERTEXARRAYSPROC gl_delete_vertex_arrays = NULL;
PFNGLDEPTHFUNCPROC gl_depth_func = NULL;
PFNGLDEPTHMASKPROC gl_depth_mask = NULL;
PFNGLDEPTHRANGEPROC gl_depth_range = NULL;
PFNGLDETACHSHADERPROC gl_detach_shader = NULL;
PFNGLDISABLEPROC gl_disable = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC gl_disable_vertex_attrib_array = NULL;
PFNGLDISABLEIPROC gl_disablei = NULL;
PFNGLDRAWARRAYSPROC gl_draw_arrays = NULL;
PFNGLDRAWARRAYSINDIRECTPROC gl_draw_arrays_indirect = NULL;
PFNGLDRAWARRAYSINSTANCEDPROC gl_draw_arrays_instanced = NULL;
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC
gl_draw_arrays_instanced_base_instance = NULL;
PFNGLDRAWBUFFERPROC gl_draw_buffer = NULL;
PFNGLDRAWBUFFERSPROC gl_draw_buffers = NULL;
PFNGLDRAWELEMENTSPROC gl_draw_elements = NULL;
PFNGLDRAWELEMENTSBASEVERTEXPROC gl_draw_elements_base_vertex = NULL;
PFNGLDRAWELEMENTSINDIRECTPROC gl_draw_elements_indirect = NULL;
PFNGLDRAWELEMENTSINSTANCEDPROC gl_draw_elements_instanced = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC
gl_draw_elements_instanced_base_instance = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC
gl_draw_elements_instanced_base_vertex = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC
gl_draw_elements_instanced_base_vertex_base_instance = NULL;
PFNGLDRAWRANGEELEMENTSPROC gl_draw_range_elements = NULL;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC gl_draw_range_elements_base_vertex = NULL;
PFNGLENABLEPROC gl_enable = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC gl_enable_vertex_attrib_array = NULL;
PFNGLENABLEIPROC gl_enablei = NULL;
PFNGLENDCONDITIONALRENDERPROC gl_end_conditional_render = NULL;
PFNGLENDQUERYPROC gl_end_query = NULL;
PFNGLENDTRANSFORMFEEDBACKPROC gl_end_transform_feedback = NULL;
PFNGLFENCESYNCPROC gl_fence_sync = NULL;
PFNGLFINISHPROC gl_finish = NULL;
PFNGLFLUSHPROC gl_flush = NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC gl_flush_mapped_buffer_range = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC gl_framebuffer_renderbuffer = NULL;
PFNGLFRAMEBUFFERTEXTUREPROC gl_framebuffer_texture = NULL;
PFNGLFRAMEBUFFERTEXTURE1DPROC gl_framebuffer_texture1d = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC gl_framebuffer_texture2d = NULL;
PFNGLFRAMEBUFFERTEXTURE3DPROC gl_framebuffer_texture3d = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERPROC gl_framebuffer_texture_layer = NULL;
PFNGLFRONTFACEPROC gl_front_face = NULL;
PFNGLGENBUFFERSPROC gl_gen_buffers = NULL;
PFNGLGENFRAMEBUFFERSPROC gl_gen_framebuffers = NULL;
PFNGLGENPROGRAMPIPELINESPROC gl_gen_program_pipelines = NULL;
PFNGLGENQUERIESPROC gl_gen_queries = NULL;
PFNGLGENRENDERBUFFERSPROC gl_gen_renderbuffers = NULL;
PFNGLGENSAMPLERSPROC gl_gen_samplers = NULL;
PFNGLGENTEXTURESPROC gl_gen_textures = NULL;
PFNGLGENVERTEXARRAYSPROC gl_gen_vertex_arrays = NULL;
PFNGLGENERATEMIPMAPPROC gl_generate_mipmap = NULL;
PFNGLGETACTIVEATTRIBPROC gl_get_active_attrib = NULL;
PFNGLGETACTIVEUNIFORMPROC gl_get_active_uniform = NULL;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC gl_get_active_uniform_block_name = NULL;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC gl_get_active_uniform_blockiv = NULL;
PFNGLGETACTIVEUNIFORMNAMEPROC gl_get_active_uniform_name = NULL;
PFNGLGETACTIVEUNIFORMSIVPROC gl_get_active_uniformsiv = NULL;
PFNGLGETATTACHEDSHADERSPROC gl_get_attached_shaders = NULL;
PFNGLGETATTRIBLOCATIONPROC gl_get_attrib_location = NULL;
PFNGLGETBOOLEANI_VPROC gl_get_booleani_v = NULL;
PFNGLGETBOOLEANVPROC gl_get_booleanv = NULL;
PFNGLGETBUFFERPARAMETERI64VPROC gl_get_buffer_parameteri64v = NULL;
PFNGLGETBUFFERPARAMETERIVPROC gl_get_buffer_parameteriv = NULL;
PFNGLGETBUFFERPOINTERVPROC gl_get_buffer_pointerv = NULL;
PFNGLGETBUFFERSUBDATAPROC gl_get_buffer_sub_data = NULL;
PFNGLGETCOMPRESSEDTEXIMAGEPROC gl_get_compressed_tex_image = NULL;
PFNGLGETDOUBLEVPROC gl_get_doublev = NULL;
PFNGLGETERRORPROC gl_get_error = NULL;
PFNGLGETFLOATVPROC gl_get_floatv = NULL;
PFNGLGETFRAGDATAINDEXPROC gl_get_frag_data_index = NULL;
PFNGLGETFRAGDATALOCATIONPROC gl_get_frag_data_location = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC
gl_get_framebuffer_attachment_parameteriv = NULL;
PFNGLGETINTEGER64I_VPROC gl_get_integer64i_v = NULL;
PFNGLGETINTEGER64VPROC gl_get_integer64v = NULL;
PFNGLGETINTEGERI_VPROC gl_get_integeri_v = NULL;
PFNGLGETINTEGERVPROC gl_get_integerv = NULL;
PFNGLGETMULTISAMPLEFVPROC gl_get_multisamplefv = NULL;
PFNGLGETPROGRAMINFOLOGPROC gl_get_program_info_log = NULL;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC gl_get_program_pipeline_info_log = NULL;
PFNGLGETPROGRAMPIPELINEIVPROC gl_get_program_pipelineiv = NULL;
PFNGLGETPROGRAMIVPROC gl_get_programiv = NULL;
PFNGLGETQUERYOBJECTI64VPROC gl_get_query_objecti64v = NULL;
PFNGLGETQUERYOBJECTIVPROC gl_get_query_objectiv = NULL;
PFNGLGETQUERYOBJECTUI64VPROC gl_get_query_objectui64v = NULL;
PFNGLGETQUERYOBJECTUIVPROC gl_get_query_objectuiv = NULL;
PFNGLGETQUERYIVPROC gl_get_queryiv = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC gl_get_renderbuffer_parameteriv = NULL;
PFNGLGETSAMPLERPARAMETERIIVPROC gl_get_sampler_parameter_iiv = NULL;
PFNGLGETSAMPLERPARAMETERIUIVPROC gl_get_sampler_parameter_iuiv = NULL;
PFNGLGETSAMPLERPARAMETERFVPROC gl_get_sampler_parameterfv = NULL;
PFNGLGETSAMPLERPARAMETERIVPROC gl_get_sampler_parameteriv = NULL;
PFNGLGETSHADERINFOLOGPROC gl_get_shader_info_log = NULL;
PFNGLGETSHADERSOURCEPROC gl_get_shader_source = NULL;
PFNGLGETSHADERIVPROC gl_get_shaderiv = NULL;
PFNGLGETSTRINGPROC gl_get_string = NULL;
PFNGLGETSTRINGIPROC gl_get_stringi = NULL;
PFNGLGETSYNCIVPROC gl_get_synciv = NULL;
PFNGLGETTEXIMAGEPROC gl_get_tex_image = NULL;
PFNGLGETTEXLEVELPARAMETERFVPROC gl_get_tex_level_parameterfv = NULL;
PFNGLGETTEXLEVELPARAMETERIVPROC gl_get_tex_level_parameteriv = NULL;
PFNGLGETTEXPARAMETERIIVPROC gl_get_tex_parameter_iiv = NULL;
PFNGLGETTEXPARAMETERIUIVPROC gl_get_tex_parameter_iuiv = NULL;
PFNGLGETTEXPARAMETERFVPROC gl_get_tex_parameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC gl_get_tex_parameteriv = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC gl_get_transform_feedback_varying = NULL;
PFNGLGETUNIFORMBLOCKINDEXPROC gl_get_uniform_block_index = NULL;
PFNGLGETUNIFORMINDICESPROC gl_get_uniform_indices = NULL;
PFNGLGETUNIFORMLOCATIONPROC gl_get_uniform_location = NULL;
PFNGLGETUNIFORMFVPROC gl_get_uniformfv = NULL;
PFNGLGETUNIFORMIVPROC gl_get_uniformiv = NULL;
PFNGLGETUNIFORMUIVPROC gl_get_uniformuiv = NULL;
PFNGLGETVERTEXATTRIBIIVPROC gl_get_vertex_attrib_iiv = NULL;
PFNGLGETVERTEXATTRIBIUIVPROC gl_get_vertex_attrib_iuiv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC gl_get_vertex_attrib_pointerv = NULL;
PFNGLGETVERTEXATTRIBDVPROC gl_get_vertex_attribdv = NULL;
PFNGLGETVERTEXATTRIBFVPROC gl_get_vertex_attribfv = NULL;
PFNGLGETVERTEXATTRIBIVPROC gl_get_vertex_attribiv = NULL;
PFNGLHINTPROC gl_hint = NULL;
PFNGLISBUFFERPROC gl_is_buffer = NULL;
PFNGLISENABLEDPROC gl_is_enabled = NULL;
PFNGLISENABLEDIPROC gl_is_enabledi = NULL;
PFNGLISFRAMEBUFFERPROC gl_is_framebuffer = NULL;
PFNGLISPROGRAMPROC gl_is_program = NULL;
PFNGLISPROGRAMPIPELINEPROC gl_is_program_pipeline = NULL;
PFNGLISQUERYPROC gl_is_query = NULL;
PFNGLISRENDERBUFFERPROC gl_is_renderbuffer = NULL;
PFNGLISSAMPLERPROC gl_is_sampler = NULL;
PFNGLISSHADERPROC gl_is_shader = NULL;
PFNGLISSYNCPROC gl_is_sync = NULL;
PFNGLISTEXTUREPROC gl_is_texture = NULL;
PFNGLISVERTEXARRAYPROC gl_is_vertex_array = NULL;
PFNGLLINEWIDTHPROC gl_line_width = NULL;
PFNGLLINKPROGRAMPROC gl_link_program = NULL;
PFNGLLOGICOPPROC gl_logic_op = NULL;
PFNGLMAPBUFFERPROC gl_map_buffer = NULL;
PFNGLMAPBUFFERRANGEPROC gl_map_buffer_range = NULL;
PFNGLMULTIDRAWARRAYSPROC gl_multi_draw_arrays = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTPROC gl_multi_draw_arrays_indirect = NULL;
PFNGLMULTIDRAWELEMENTSPROC gl_multi_draw_elements = NULL;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC gl_multi_draw_elements_base_vertex = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTPROC gl_multi_draw_elements_indirect = NULL;
PFNGLPIXELSTOREFPROC gl_pixel_storef = NULL;
PFNGLPIXELSTOREIPROC gl_pixel_storei = NULL;
PFNGLPOINTPARAMETERFPROC gl_point_parameterf = NULL;
PFNGLPOINTPARAMETERFVPROC gl_point_parameterfv = NULL;
PFNGLPOINTPARAMETERIPROC gl_point_parameteri = NULL;
PFNGLPOINTPARAMETERIVPROC gl_point_parameteriv = NULL;
PFNGLPOINTSIZEPROC gl_point_size = NULL;
PFNGLPOLYGONMODEPROC gl_polygon_mode = NULL;
PFNGLPOLYGONOFFSETPROC gl_polygon_offset = NULL;
PFNGLPRIMITIVERESTARTINDEXPROC gl_primitive_restart_index = NULL;
PFNGLPROGRAMPARAMETERIPROC gl_program_parameteri = NULL;
PFNGLPROGRAMUNIFORM1DPROC gl_program_uniform1d = NULL;
PFNGLPROGRAMUNIFORM1DVPROC gl_program_uniform1dv = NULL;
PFNGLPROGRAMUNIFORM1FPROC gl_program_uniform1f = NULL;
PFNGLPROGRAMUNIFORM1FVPROC gl_program_uniform1fv = NULL;
PFNGLPROGRAMUNIFORM1IPROC gl_program_uniform1i = NULL;
PFNGLPROGRAMUNIFORM1IVPROC gl_program_uniform1iv = NULL;
PFNGLPROGRAMUNIFORM1UIPROC gl_program_uniform1ui = NULL;
PFNGLPROGRAMUNIFORM1UIVPROC gl_program_uniform1uiv = NULL;
PFNGLPROGRAMUNIFORM2DPROC gl_program_uniform2d = NULL;
PFNGLPROGRAMUNIFORM2DVPROC gl_program_uniform2dv = NULL;
PFNGLPROGRAMUNIFORM2FPROC gl_program_uniform2f = NULL;
PFNGLPROGRAMUNIFORM2FVPROC gl_program_uniform2fv = NULL;
PFNGLPROGRAMUNIFORM2IPROC gl_program_uniform2i = NULL;
PFNGLPROGRAMUNIFORM2IVPROC gl_program_uniform2iv = NULL;
PFNGLPROGRAMUNIFORM2UIPROC gl_program_uniform2ui = NULL;
PFNGLPROGRAMUNIFORM2UIVPROC gl_program_uniform2uiv = NULL;
PFNGLPROGRAMUNIFORM3DPROC gl_program_uniform3d = NULL;
PFNGLPROGRAMUNIFORM3DVPROC gl_program_uniform3dv = NULL;
PFNGLPROGRAMUNIFORM3FPROC gl_program_uniform3f = NULL;
PFNGLPROGRAMUNIFORM3FVPROC gl_program_uniform3fv = NULL;
PFNGLPROGRAMUNIFORM3IPROC gl_program_uniform3i = NULL;
PFNGLPROGRAMUNIFORM3IVPROC gl_program_uniform3iv = NULL;
PFNGLPROGRAMUNIFORM3UIPROC gl_program_uniform3ui = NULL;
PFNGLPROGRAMUNIFORM3UIVPROC gl_program_uniform3uiv = NULL;
PFNGLPROGRAMUNIFORM4DPROC gl_program_uniform4d = NULL;
PFNGLPROGRAMUNIFORM4DVPROC gl_program_uniform4dv = NULL;
PFNGLPROGRAMUNIFORM4FPROC gl_program_uniform4f = NULL;
PFNGLPROGRAMUNIFORM4FVPROC gl_program_uniform4fv = NULL;
PFNGLPROGRAMUNIFORM4IPROC gl_program_uniform4i = NULL;
PFNGLPROGRAMUNIFORM4IVPROC gl_program_uniform4iv = NULL;
PFNGLPROGRAMUNIFORM4UIPROC gl_program_uniform4ui = NULL;
PFNGLPROGRAMUNIFORM4UIVPROC gl_program_uniform4uiv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2DVPROC gl_program_uniform_matrix2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVPROC gl_program_uniform_matrix2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC gl_program_uniform_matrix2x3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC gl_program_uniform_matrix2x3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC gl_program_uniform_matrix2x4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC gl_program_uniform_matrix2x4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3DVPROC gl_program_uniform_matrix3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC gl_program_uniform_matrix3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC gl_program_uniform_matrix3x2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC gl_program_uniform_matrix3x2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC gl_program_uniform_matrix3x4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC gl_program_uniform_matrix3x4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4DVPROC gl_program_uniform_matrix4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC gl_program_uniform_matrix4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC gl_program_uniform_matrix4x2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC gl_program_uniform_matrix4x2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC gl_program_uniform_matrix4x3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC gl_program_uniform_matrix4x3fv = NULL;
PFNGLPROVOKINGVERTEXPROC gl_provoking_vertex = NULL;
PFNGLQUERYCOUNTERPROC gl_query_counter = NULL;
PFNGLREADBUFFERPROC gl_read_buffer = NULL;
PFNGLREADPIXELSPROC gl_read_pixels = NULL;
PFNGLRENDERBUFFERSTORAGEPROC gl_renderbuffer_storage = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC gl_renderbuffer_storage_multisample = NULL;
PFNGLSAMPLECOVERAGEPROC gl_sample_coverage = NULL;
PFNGLSAMPLEMASKIPROC gl_sample_maski = NULL;
PFNGLSAMPLERPARAMETERIIVPROC gl_sampler_parameter_iiv = NULL;
PFNGLSAMPLERPARAMETERIUIVPROC gl_sampler_parameter_iuiv = NULL;
PFNGLSAMPLERPARAMETERFPROC gl_sampler_parameterf = NULL;
PFNGLSAMPLERPARAMETERFVPROC gl_sampler_parameterfv = NULL;
PFNGLSAMPLERPARAMETERIPROC gl_sampler_parameteri = NULL;
PFNGLSAMPLERPARAMETERIVPROC gl_sampler_parameteriv = NULL;
PFNGLSCISSORPROC gl_scissor = NULL;
PFNGLSHADERSOURCEPROC gl_shader_source = NULL;
PFNGLSTENCILFUNCPROC gl_stencil_func = NULL;
PFNGLSTENCILFUNCSEPARATEPROC gl_stencil_func_separate = NULL;
PFNGLSTENCILMASKPROC gl_stencil_mask = NULL;
PFNGLSTENCILMASKSEPARATEPROC gl_stencil_mask_separate = NULL;
PFNGLSTENCILOPPROC gl_stencil_op = NULL;
PFNGLSTENCILOPSEPARATEPROC gl_stencil_op_separate = NULL;
PFNGLTEXBUFFERPROC gl_tex_buffer = NULL;
PFNGLTEXBUFFERRANGEPROC gl_tex_buffer_range = NULL;
PFNGLTEXIMAGE1DPROC gl_tex_image1d = NULL;
PFNGLTEXIMAGE2DPROC gl_tex_image2d = NULL;
PFNGLTEXIMAGE2DMULTISAMPLEPROC gl_tex_image2d_multisample = NULL;
PFNGLTEXIMAGE3DPROC gl_tex_image3d = NULL;
PFNGLTEXIMAGE3DMULTISAMPLEPROC gl_tex_image3d_multisample = NULL;
PFNGLTEXPARAMETERIIVPROC gl_tex_parameter_iiv = NULL;
PFNGLTEXPARAMETERIUIVPROC gl_tex_parameter_iuiv = NULL;
PFNGLTEXPARAMETERFPROC gl_tex_parameterf = NULL;
PFNGLTEXPARAMETERFVPROC gl_tex_parameterfv = NULL;
PFNGLTEXPARAMETERIPROC gl_tex_parameteri = NULL;
PFNGLTEXPARAMETERIVPROC gl_tex_parameteriv = NULL;
PFNGLTEXSTORAGE1DPROC gl_tex_storage1d = NULL;
PFNGLTEXSTORAGE2DPROC gl_tex_storage2d = NULL;
PFNGLTEXSTORAGE3DPROC gl_tex_storage3d = NULL;
PFNGLTEXSUBIMAGE1DPROC gl_tex_sub_image1d = NULL;
PFNGLTEXSUBIMAGE2DPROC gl_tex_sub_image2d = NULL;
PFNGLTEXSUBIMAGE3DPROC gl_tex_sub_image3d = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC gl_transform_feedback_varyings = NULL;
PFNGLUNIFORM1FPROC gl_uniform1f = NULL;
PFNGLUNIFORM1FVPROC gl_uniform1fv = NULL;
PFNGLUNIFORM1IPROC gl_uniform1i = NULL;
PFNGLUNIFORM1IVPROC gl_uniform1iv = NULL;
PFNGLUNIFORM1UIPROC gl_uniform1ui = NULL;
PFNGLUNIFORM1UIVPROC gl_uniform1uiv = NULL;
PFNGLUNIFORM2FPROC gl_uniform2f = NULL;
PFNGLUNIFORM2FVPROC gl_uniform2fv = NULL;
PFNGLUNIFORM2IPROC gl_uniform2i = NULL;
PFNGLUNIFORM2IVPROC gl_uniform2iv = NULL;
PFNGLUNIFORM2UIPROC gl_uniform2ui = NULL;
PFNGLUNIFORM2UIVPROC gl_uniform2uiv = NULL;
PFNGLUNIFORM3FPROC gl_uniform3f = NULL;
PFNGLUNIFORM3FVPROC gl_uniform3fv = NULL;
PFNGLUNIFORM3IPROC gl_uniform3i = NULL;
PFNGLUNIFORM3IVPROC gl_uniform3iv = NULL;
PFNGLUNIFORM3UIPROC gl_uniform3ui = NULL;
PFNGLUNIFORM3UIVPROC gl_uniform3uiv = NULL;
PFNGLUNIFORM4FPROC gl_uniform4f = NULL;
PFNGLUNIFORM4FVPROC gl_uniform4fv = NULL;
PFNGLUNIFORM4IPROC gl_uniform4i = NULL;
PFNGLUNIFORM4IVPROC gl_uniform4iv = NULL;
PFNGLUNIFORM4UIPROC gl_uniform4ui = NULL;
PFNGLUNIFORM4UIVPROC gl_uniform4uiv = NULL;
PFNGLUNIFORMBLOCKBINDINGPROC gl_uniform_block_binding = NULL;
PFNGLUNIFORMMATRIX2FVPROC gl_uniform_matrix2fv = NULL;
PFNGLUNIFORMMATRIX2X3FVPROC gl_uniform_matrix2x3fv = NULL;
PFNGLUNIFORMMATRIX2X4FVPROC gl_uniform_matrix2x4fv = NULL;
PFNGLUNIFORMMATRIX3FVPROC gl_uniform_matrix3fv = NULL;
PFNGLUNIFORMMATRIX3X2FVPROC gl_uniform_matrix3x2fv = NULL;
PFNGLUNIFORMMATRIX3X4FVPROC gl_uniform_matrix3x4fv = NULL;
PFNGLUNIFORMMATRIX4FVPROC gl_uniform_matrix4fv = NULL;
PFNGLUNIFORMMATRIX4X2FVPROC gl_uniform_matrix4x2fv = NULL;
PFNGLUNIFORMMATRIX4X3FVPROC gl_uniform_matrix4x3fv = NULL;
PFNGLUNMAPBUFFERPROC gl_unmap_buffer = NULL;
PFNGLUSEPROGRAMPROC gl_use_program = NULL;
PFNGLUSEPROGRAMSTAGESPROC gl_use_program_stages = NULL;
PFNGLVALIDATEPROGRAMPROC gl_validate_program = NULL;
PFNGLVALIDATEPROGRAMPIPELINEPROC gl_validate_program_pipeline = NULL;
PFNGLVERTEXATTRIB1DPROC gl_vertex_attrib1d = NULL;
PFNGLVERTEXATTRIB1DVPROC gl_vertex_attrib1dv = NULL;
PFNGLVERTEXATTRIB1FPROC gl_vertex_attrib1f = NULL;
PFNGLVERTEXATTRIB1FVPROC gl_vertex_attrib1fv = NULL;
PFNGLVERTEXATTRIB1SPROC gl_vertex_attrib1s = NULL;
PFNGLVERTEXATTRIB1SVPROC gl_vertex_attrib1sv = NULL;
PFNGLVERTEXATTRIB2DPROC gl_vertex_attrib2d = NULL;
PFNGLVERTEXATTRIB2DVPROC gl_vertex_attrib2dv = NULL;
PFNGLVERTEXATTRIB2FPROC gl_vertex_attrib2f = NULL;
PFNGLVERTEXATTRIB2FVPROC gl_vertex_attrib2fv = NULL;
PFNGLVERTEXATTRIB2SPROC gl_vertex_attrib2s = NULL;
PFNGLVERTEXATTRIB2SVPROC gl_vertex_attrib2sv = NULL;
PFNGLVERTEXATTRIB3DPROC gl_vertex_attrib3d = NULL;
PFNGLVERTEXATTRIB3DVPROC gl_vertex_attrib3dv = NULL;
PFNGLVERTEXATTRIB3FPROC gl_vertex_attrib3f = NULL;
PFNGLVERTEXATTRIB3FVPROC gl_vertex_attrib3fv = NULL;
PFNGLVERTEXATTRIB3SPROC gl_vertex_attrib3s = NULL;
PFNGLVERTEXATTRIB3SVPROC gl_vertex_attrib3sv = NULL;
PFNGLVERTEXATTRIB4NBVPROC gl_vertex_attrib4nbv = NULL;
PFNGLVERTEXATTRIB4NIVPROC gl_vertex_attrib4niv = NULL;
PFNGLVERTEXATTRIB4NSVPROC gl_vertex_attrib4nsv = NULL;
PFNGLVERTEXATTRIB4NUBPROC gl_vertex_attrib4nub = NULL;
PFNGLVERTEXATTRIB4NUBVPROC gl_vertex_attrib4nubv = NULL;
PFNGLVERTEXATTRIB4NUIVPROC gl_vertex_attrib4nuiv = NULL;
PFNGLVERTEXATTRIB4NUSVPROC gl_vertex_attrib4nusv = NULL;
PFNGLVERTEXATTRIB4BVPROC gl_vertex_attrib4bv = NULL;
PFNGLVERTEXATTRIB4DPROC gl_vertex_attrib4d = NULL;
PFNGLVERTEXATTRIB4DVPROC gl_vertex_attrib4dv = NULL;
PFNGLVERTEXATTRIB4FPROC gl_vertex_attrib4f = NULL;
PFNGLVERTEXATTRIB4FVPROC gl_vertex_attrib4fv = NULL;
PFNGLVERTEXATTRIB4IVPROC gl_vertex_attrib4iv = NULL;
PFNGLVERTEXATTRIB4SPROC gl_vertex_attrib4s = NULL;
PFNGLVERTEXATTRIB4SVPROC gl_vertex_attrib4sv = NULL;
PFNGLVERTEXATTRIB4UBVPROC gl_vertex_attrib4ubv = NULL;
PFNGLVERTEXATTRIB4UIVPROC gl_vertex_attrib4uiv = NULL;
PFNGLVERTEXATTRIB4USVPROC gl_vertex_attrib4usv = NULL;
PFNGLVERTEXATTRIBBINDINGPROC gl_vertex_attrib_binding = NULL;
PFNGLVERTEXATTRIBDIVISORPROC gl_vertex_attrib_divisor = NULL;
PFNGLVERTEXATTRIBFORMATPROC gl_vertex_attrib_format = NULL;
PFNGLVERTEXATTRIBI1IPROC gl_vertex_attrib_i1i = NULL;
PFNGLVERTEXATTRIBI1IVPROC gl_vertex_attrib_i1iv = NULL;
PFNGLVERTEXATTRIBI1UIPROC gl_vertex_attrib_i1ui = NULL;
PFNGLVERTEXATTRIBI1UIVPROC gl_vertex_attrib_i1uiv = NULL;
PFNGLVERTEXATTRIBI2IPROC gl_vertex_attrib_i2i = NULL;
PFNGLVERTEXATTRIBI2IVPROC gl_vertex_attrib_i2iv = NULL;
PFNGLVERTEXATTRIBI2UIPROC gl_vertex_attrib_i2ui = NULL;
PFNGLVERTEXATTRIBI2UIVPROC gl_vertex_attrib_i2uiv = NULL;
PFNGLVERTEXATTRIBI3IPROC gl_vertex_attrib_i3i = NULL;
PFNGLVERTEXATTRIBI3IVPROC gl_vertex_attrib_i3iv = NULL;
PFNGLVERTEXATTRIBI3UIPROC gl_vertex_attrib_i3ui = NULL;
PFNGLVERTEXATTRIBI3UIVPROC gl_vertex_attrib_i3uiv = NULL;
PFNGLVERTEXATTRIBI4BVPROC gl_vertex_attrib_i4bv = NULL;
PFNGLVERTEXATTRIBI4IPROC gl_vertex_attrib_i4i = NULL;
PFNGLVERTEXATTRIBI4IVPROC gl_vertex_attrib_i4iv = NULL;
PFNGLVERTEXATTRIBI4SVPROC gl_vertex_attrib_i4sv = NULL;
PFNGLVERTEXATTRIBI4UBVPROC gl_vertex_attrib_i4ubv = NULL;
PFNGLVERTEXATTRIBI4UIPROC gl_vertex_attrib_i4ui = NULL;
PFNGLVERTEXATTRIBI4UIVPROC gl_vertex_attrib_i4uiv = NULL;
PFNGLVERTEXATTRIBI4USVPROC gl_vertex_attrib_i4usv = NULL;
PFNGLVERTEXATTRIBIFORMATPROC gl_vertex_attrib_i_format = NULL;
PFNGLVERTEXATTRIBIPOINTERPROC gl_vertex_attrib_i_pointer = NULL;
PFNGLVERTEXATTRIBLFORMATPROC gl_vertex_attrib_l_format = NULL;
PFNGLVERTEXATTRIBP1UIPROC gl_vertex_attrib_p1ui = NULL;
PFNGLVERTEXATTRIBP1UIVPROC gl_vertex_attrib_p1uiv = NULL;
PFNGLVERTEXATTRIBP2UIPROC gl_vertex_attrib_p2ui = NULL;
PFNGLVERTEXATTRIBP2UIVPROC gl_vertex_attrib_p2uiv = NULL;
PFNGLVERTEXATTRIBP3UIPROC gl_vertex_attrib_p3ui = NULL;
PFNGLVERTEXATTRIBP3UIVPROC gl_vertex_attrib_p3uiv = NULL;
PFNGLVERTEXATTRIBP4UIPROC gl_vertex_attrib_p4ui = NULL;
PFNGLVERTEXATTRIBP4UIVPROC gl_vertex_attrib_p4uiv = NULL;
PFNGLVERTEXATTRIBPOINTERPROC gl_vertex_attrib_pointer = NULL;
PFNGLVERTEXBINDINGDIVISORPROC gl_vertex_binding_divisor = NULL;
PFNGLVIEWPORTPROC gl_viewport = NULL;
PFNGLWAITSYNCPROC gl_wait_sync = NULL;

static void glext_load_gl_version_1_0(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_1_0) return;
  gl_blend_func = (PFNGLBLENDFUNCPROC)load(userptr, "glBlendFunc");
  gl_clear = (PFNGLCLEARPROC)load(userptr, "glClear");
  gl_clear_color = (PFNGLCLEARCOLORPROC)load(userptr, "glClearColor");
  gl_clear_depth = (PFNGLCLEARDEPTHPROC)load(userptr, "glClearDepth");
  gl_clear_stencil = (PFNGLCLEARSTENCILPROC)load(userptr, "glClearStencil");
  gl_color_mask = (PFNGLCOLORMASKPROC)load(userptr, "glColorMask");
  gl_cull_face = (PFNGLCULLFACEPROC)load(userptr, "glCullFace");
  gl_depth_func = (PFNGLDEPTHFUNCPROC)load(userptr, "glDepthFunc");
  gl_depth_mask = (PFNGLDEPTHMASKPROC)load(userptr, "glDepthMask");
  gl_depth_range = (PFNGLDEPTHRANGEPROC)load(userptr, "glDepthRange");
  gl_disable = (PFNGLDISABLEPROC)load(userptr, "glDisable");
  gl_draw_buffer = (PFNGLDRAWBUFFERPROC)load(userptr, "glDrawBuffer");
  gl_enable = (PFNGLENABLEPROC)load(userptr, "glEnable");
  gl_finish = (PFNGLFINISHPROC)load(userptr, "glFinish");
  gl_flush = (PFNGLFLUSHPROC)load(userptr, "glFlush");
  gl_front_face = (PFNGLFRONTFACEPROC)load(userptr, "glFrontFace");
  gl_get_booleanv = (PFNGLGETBOOLEANVPROC)load(userptr, "glGetBooleanv");
  gl_get_doublev = (PFNGLGETDOUBLEVPROC)load(userptr, "glGetDoublev");
  gl_get_error = (PFNGLGETERRORPROC)load(userptr, "glGetError");
  gl_get_floatv = (PFNGLGETFLOATVPROC)load(userptr, "glGetFloatv");
  gl_get_integerv = (PFNGLGETINTEGERVPROC)load(userptr, "glGetIntegerv");
  gl_get_string = (PFNGLGETSTRINGPROC)load(userptr, "glGetString");
  gl_get_tex_image = (PFNGLGETTEXIMAGEPROC)load(userptr, "glGetTexImage");
  gl_get_tex_level_parameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC)load(userptr, "glGetTexLevelParameterfv");
  gl_get_tex_level_parameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC)load(userptr, "glGetTexLevelParameteriv");
  gl_get_tex_parameterfv = (PFNGLGETTEXPARAMETERFVPROC)load(userptr, "glGetTexParameterfv");
  gl_get_tex_parameteriv = (PFNGLGETTEXPARAMETERIVPROC)load(userptr, "glGetTexParameteriv");
  gl_hint = (PFNGLHINTPROC)load(userptr, "glHint");
  gl_is_enabled = (PFNGLISENABLEDPROC)load(userptr, "glIsEnabled");
  gl_line_width = (PFNGLLINEWIDTHPROC)load(userptr, "glLineWidth");
  gl_logic_op = (PFNGLLOGICOPPROC)load(userptr, "glLogicOp");
  gl_pixel_storef = (PFNGLPIXELSTOREFPROC)load(userptr, "glPixelStoref");
  gl_pixel_storei = (PFNGLPIXELSTOREIPROC)load(userptr, "glPixelStorei");
  gl_point_size = (PFNGLPOINTSIZEPROC)load(userptr, "glPointSize");
  gl_polygon_mode = (PFNGLPOLYGONMODEPROC)load(userptr, "glPolygonMode");
  gl_read_buffer = (PFNGLREADBUFFERPROC)load(userptr, "glReadBuffer");
  gl_read_pixels = (PFNGLREADPIXELSPROC)load(userptr, "glReadPixels");
  gl_scissor = (PFNGLSCISSORPROC)load(userptr, "glScissor");
  gl_stencil_func = (PFNGLSTENCILFUNCPROC)load(userptr, "glStencilFunc");
  gl_stencil_mask = (PFNGLSTENCILMASKPROC)load(userptr, "glStencilMask");
  gl_stencil_op = (PFNGLSTENCILOPPROC)load(userptr, "glStencilOp");
  gl_tex_image1d = (PFNGLTEXIMAGE1DPROC)load(userptr, "glTexImage1D");
  gl_tex_image2d = (PFNGLTEXIMAGE2DPROC)load(userptr, "glTexImage2D");
  gl_tex_parameterf = (PFNGLTEXPARAMETERFPROC)load(userptr, "glTexParameterf");
  gl_tex_parameterfv = (PFNGLTEXPARAMETERFVPROC)load(userptr, "glTexParameterfv");
  gl_tex_parameteri = (PFNGLTEXPARAMETERIPROC)load(userptr, "glTexParameteri");
  gl_tex_parameteriv = (PFNGLTEXPARAMETERIVPROC)load(userptr, "glTexParameteriv");
  gl_viewport = (PFNGLVIEWPORTPROC)load(userptr, "glViewport");
}
static void glext_load_gl_version_1_1(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_1_1) return;
  gl_bind_texture = (PFNGLBINDTEXTUREPROC)load(userptr, "glBindTexture");
  gl_copy_tex_image1d = (PFNGLCOPYTEXIMAGE1DPROC)load(userptr, "glCopyTexImage1D");
  gl_copy_tex_image2d = (PFNGLCOPYTEXIMAGE2DPROC)load(userptr, "glCopyTexImage2D");
  gl_copy_tex_sub_image1d = (PFNGLCOPYTEXSUBIMAGE1DPROC)load(userptr, "glCopyTexSubImage1D");
  gl_copy_tex_sub_image2d = (PFNGLCOPYTEXSUBIMAGE2DPROC)load(userptr, "glCopyTexSubImage2D");
  gl_delete_textures = (PFNGLDELETETEXTURESPROC)load(userptr, "glDeleteTextures");
  gl_draw_arrays = (PFNGLDRAWARRAYSPROC)load(userptr, "glDrawArrays");
  gl_draw_elements = (PFNGLDRAWELEMENTSPROC)load(userptr, "glDrawElements");
  gl_gen_textures = (PFNGLGENTEXTURESPROC)load(userptr, "glGenTextures");
  gl_is_texture = (PFNGLISTEXTUREPROC)load(userptr, "glIsTexture");
  gl_polygon_offset = (PFNGLPOLYGONOFFSETPROC)load(userptr, "glPolygonOffset");
  gl_tex_sub_image1d = (PFNGLTEXSUBIMAGE1DPROC)load(userptr, "glTexSubImage1D");
  gl_tex_sub_image2d = (PFNGLTEXSUBIMAGE2DPROC)load(userptr, "glTexSubImage2D");
}
static void glext_load_gl_version_1_2(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_1_2) return;
  gl_copy_tex_sub_image3d = (PFNGLCOPYTEXSUBIMAGE3DPROC)load(userptr, "glCopyTexSubImage3D");
  gl_draw_range_elements = (PFNGLDRAWRANGEELEMENTSPROC)load(userptr, "glDrawRangeElements");
  gl_tex_image3d = (PFNGLTEXIMAGE3DPROC)load(userptr, "glTexImage3D");
  gl_tex_sub_image3d = (PFNGLTEXSUBIMAGE3DPROC)load(userptr, "glTexSubImage3D");
}
static void glext_load_gl_version_1_3(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_1_3) return;
  gl_active_texture = (PFNGLACTIVETEXTUREPROC)load(userptr, "glActiveTexture");
  gl_compressed_tex_image1d = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)load(userptr, "glCompressedTexImage1D");
  gl_compressed_tex_image2d = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)load(userptr, "glCompressedTexImage2D");
  gl_compressed_tex_image3d = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)load(userptr, "glCompressedTexImage3D");
  gl_compressed_tex_sub_image1d = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)load(userptr, "glCompressedTexSubImage1D");
  gl_compressed_tex_sub_image2d = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)load(userptr, "glCompressedTexSubImage2D");
  gl_compressed_tex_sub_image3d = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)load(userptr, "glCompressedTexSubImage3D");
  gl_get_compressed_tex_image = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)load(userptr, "glGetCompressedTexImage");
  gl_sample_coverage = (PFNGLSAMPLECOVERAGEPROC)load(userptr, "glSampleCoverage");
}
static void glext_load_gl_version_1_4(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_1_4) return;
  gl_blend_color = (PFNGLBLENDCOLORPROC)load(userptr, "glBlendColor");
  gl_blend_equation = (PFNGLBLENDEQUATIONPROC)load(userptr, "glBlendEquation");
  gl_blend_func_separate = (PFNGLBLENDFUNCSEPARATEPROC)load(userptr, "glBlendFuncSeparate");
  gl_multi_draw_arrays = (PFNGLMULTIDRAWARRAYSPROC)load(userptr, "glMultiDrawArrays");
  gl_multi_draw_elements = (PFNGLMULTIDRAWELEMENTSPROC)load(userptr, "glMultiDrawElements");
  gl_point_parameterf = (PFNGLPOINTPARAMETERFPROC)load(userptr, "glPointParameterf");
  gl_point_parameterfv = (PFNGLPOINTPARAMETERFVPROC)load(userptr, "glPointParameterfv");
  gl_point_parameteri = (PFNGLPOINTPARAMETERIPROC)load(userptr, "glPointParameteri");
  gl_point_parameteriv = (PFNGLPOINTPARAMETERIVPROC)load(userptr, "glPointParameteriv");
}
static void glext_load_gl_version_1_5(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_1_5) return;
  gl_begin_query = (PFNGLBEGINQUERYPROC)load(userptr, "glBeginQuery");
  gl_bind_buffer = (PFNGLBINDBUFFERPROC)load(userptr, "glBindBuffer");
  gl_buffer_data = (PFNGLBUFFERDATAPROC)load(userptr, "glBufferData");
  gl_buffer_sub_data = (PFNGLBUFFERSUBDATAPROC)load(userptr, "glBufferSubData");
  gl_delete_buffers = (PFNGLDELETEBUFFERSPROC)load(userptr, "glDeleteBuffers");
  gl_delete_queries = (PFNGLDELETEQUERIESPROC)load(userptr, "glDeleteQueries");
  gl_end_query = (PFNGLENDQUERYPROC)load(userptr, "glEndQuery");
  gl_gen_buffers = (PFNGLGENBUFFERSPROC)load(userptr, "glGenBuffers");
  gl_gen_queries = (PFNGLGENQUERIESPROC)load(userptr, "glGenQueries");
  gl_get_buffer_parameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)load(userptr, "glGetBufferParameteriv");
  gl_get_buffer_pointerv = (PFNGLGETBUFFERPOINTERVPROC)load(userptr, "glGetBufferPointerv");
  gl_get_buffer_sub_data = (PFNGLGETBUFFERSUBDATAPROC)load(userptr, "glGetBufferSubData");
  gl_get_query_objectiv = (PFNGLGETQUERYOBJECTIVPROC)load(userptr, "glGetQueryObjectiv");
  gl_get_query_objectuiv = (PFNGLGETQUERYOBJECTUIVPROC)load(userptr, "glGetQueryObjectuiv");
  gl_get_queryiv = (PFNGLGETQUERYIVPROC)load(userptr, "glGetQueryiv");
  gl_is_buffer = (PFNGLISBUFFERPROC)load(userptr, "glIsBuffer");
  gl_is_query = (PFNGLISQUERYPROC)load(userptr, "glIsQuery");
  gl_map_buffer = (PFNGLMAPBUFFERPROC)load(userptr, "glMapBuffer");
  gl_unmap_buffer = (PFNGLUNMAPBUFFERPROC)load(userptr, "glUnmapBuffer");
}
static void glext_load_gl_version_2_0(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_2_0) return;
  gl_attach_shader = (PFNGLATTACHSHADERPROC)load(userptr, "glAttachShader");
  gl_bind_attrib_location = (PFNGLBINDATTRIBLOCATIONPROC)load(userptr, "glBindAttribLocation");
  gl_blend_equation_separate = (PFNGLBLENDEQUATIONSEPARATEPROC)load(userptr, "glBlendEquationSeparate");
  gl_compile_shader = (PFNGLCOMPILESHADERPROC)load(userptr, "glCompileShader");
  gl_create_program = (PFNGLCREATEPROGRAMPROC)load(userptr, "glCreateProgram");
  gl_create_shader = (PFNGLCREATESHADERPROC)load(userptr, "glCreateShader");
  gl_delete_program = (PFNGLDELETEPROGRAMPROC)load(userptr, "glDeleteProgram");
  gl_delete_shader = (PFNGLDELETESHADERPROC)load(userptr, "glDeleteShader");
  gl_detach_shader = (PFNGLDETACHSHADERPROC)load(userptr, "glDetachShader");
  gl_disable_vertex_attrib_array = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)load(userptr, "glDisableVertexAttribArray");
  gl_draw_buffers = (PFNGLDRAWBUFFERSPROC)load(userptr, "glDrawBuffers");
  gl_enable_vertex_attrib_array = (PFNGLENABLEVERTEXATTRIBARRAYPROC)load(userptr, "glEnableVertexAttribArray");
  gl_get_active_attrib = (PFNGLGETACTIVEATTRIBPROC)load(userptr, "glGetActiveAttrib");
  gl_get_active_uniform = (PFNGLGETACTIVEUNIFORMPROC)load(userptr, "glGetActiveUniform");
  gl_get_attached_shaders = (PFNGLGETATTACHEDSHADERSPROC)load(userptr, "glGetAttachedShaders");
  gl_get_attrib_location = (PFNGLGETATTRIBLOCATIONPROC)load(userptr, "glGetAttribLocation");
  gl_get_program_info_log = (PFNGLGETPROGRAMINFOLOGPROC)load(userptr, "glGetProgramInfoLog");
  gl_get_programiv = (PFNGLGETPROGRAMIVPROC)load(userptr, "glGetProgramiv");
  gl_get_shader_info_log = (PFNGLGETSHADERINFOLOGPROC)load(userptr, "glGetShaderInfoLog");
  gl_get_shader_source = (PFNGLGETSHADERSOURCEPROC)load(userptr, "glGetShaderSource");
  gl_get_shaderiv = (PFNGLGETSHADERIVPROC)load(userptr, "glGetShaderiv");
  gl_get_uniform_location = (PFNGLGETUNIFORMLOCATIONPROC)load(userptr, "glGetUniformLocation");
  gl_get_uniformfv = (PFNGLGETUNIFORMFVPROC)load(userptr, "glGetUniformfv");
  gl_get_uniformiv = (PFNGLGETUNIFORMIVPROC)load(userptr, "glGetUniformiv");
  gl_get_vertex_attrib_pointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)load(userptr, "glGetVertexAttribPointerv");
  gl_get_vertex_attribdv = (PFNGLGETVERTEXATTRIBDVPROC)load(userptr, "glGetVertexAttribdv");
  gl_get_vertex_attribfv = (PFNGLGETVERTEXATTRIBFVPROC)load(userptr, "glGetVertexAttribfv");
  gl_get_vertex_attribiv = (PFNGLGETVERTEXATTRIBIVPROC)load(userptr, "glGetVertexAttribiv");
  gl_is_program = (PFNGLISPROGRAMPROC)load(userptr, "glIsProgram");
  gl_is_shader = (PFNGLISSHADERPROC)load(userptr, "glIsShader");
  gl_link_program = (PFNGLLINKPROGRAMPROC)load(userptr, "glLinkProgram");
  gl_shader_source = (PFNGLSHADERSOURCEPROC)load(userptr, "glShaderSource");
  gl_stencil_func_separate = (PFNGLSTENCILFUNCSEPARATEPROC)load(userptr, "glStencilFuncSeparate");
  gl_stencil_mask_separate = (PFNGLSTENCILMASKSEPARATEPROC)load(userptr, "glStencilMaskSeparate");
  gl_stencil_op_separate = (PFNGLSTENCILOPSEPARATEPROC)load(userptr, "glStencilOpSeparate");
  gl_uniform1f = (PFNGLUNIFORM1FPROC)load(userptr, "glUniform1f");
  gl_uniform1fv = (PFNGLUNIFORM1FVPROC)load(userptr, "glUniform1fv");
  gl_uniform1i = (PFNGLUNIFORM1IPROC)load(userptr, "glUniform1i");
  gl_uniform1iv = (PFNGLUNIFORM1IVPROC)load(userptr, "glUniform1iv");
  gl_uniform2f = (PFNGLUNIFORM2FPROC)load(userptr, "glUniform2f");
  gl_uniform2fv = (PFNGLUNIFORM2FVPROC)load(userptr, "glUniform2fv");
  gl_uniform2i = (PFNGLUNIFORM2IPROC)load(userptr, "glUniform2i");
  gl_uniform2iv = (PFNGLUNIFORM2IVPROC)load(userptr, "glUniform2iv");
  gl_uniform3f = (PFNGLUNIFORM3FPROC)load(userptr, "glUniform3f");
  gl_uniform3fv = (PFNGLUNIFORM3FVPROC)load(userptr, "glUniform3fv");
  gl_uniform3i = (PFNGLUNIFORM3IPROC)load(userptr, "glUniform3i");
  gl_uniform3iv = (PFNGLUNIFORM3IVPROC)load(userptr, "glUniform3iv");
  gl_uniform4f = (PFNGLUNIFORM4FPROC)load(userptr, "glUniform4f");
  gl_uniform4fv = (PFNGLUNIFORM4FVPROC)load(userptr, "glUniform4fv");
  gl_uniform4i = (PFNGLUNIFORM4IPROC)load(userptr, "glUniform4i");
  gl_uniform4iv = (PFNGLUNIFORM4IVPROC)load(userptr, "glUniform4iv");
  gl_uniform_matrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)load(userptr, "glUniformMatrix2fv");
  gl_uniform_matrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)load(userptr, "glUniformMatrix3fv");
  gl_uniform_matrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)load(userptr, "glUniformMatrix4fv");
  gl_use_program = (PFNGLUSEPROGRAMPROC)load(userptr, "glUseProgram");
  gl_validate_program = (PFNGLVALIDATEPROGRAMPROC)load(userptr, "glValidateProgram");
  gl_vertex_attrib1d = (PFNGLVERTEXATTRIB1DPROC)load(userptr, "glVertexAttrib1d");
  gl_vertex_attrib1dv = (PFNGLVERTEXATTRIB1DVPROC)load(userptr, "glVertexAttrib1dv");
  gl_vertex_attrib1f = (PFNGLVERTEXATTRIB1FPROC)load(userptr, "glVertexAttrib1f");
  gl_vertex_attrib1fv = (PFNGLVERTEXATTRIB1FVPROC)load(userptr, "glVertexAttrib1fv");
  gl_vertex_attrib1s = (PFNGLVERTEXATTRIB1SPROC)load(userptr, "glVertexAttrib1s");
  gl_vertex_attrib1sv = (PFNGLVERTEXATTRIB1SVPROC)load(userptr, "glVertexAttrib1sv");
  gl_vertex_attrib2d = (PFNGLVERTEXATTRIB2DPROC)load(userptr, "glVertexAttrib2d");
  gl_vertex_attrib2dv = (PFNGLVERTEXATTRIB2DVPROC)load(userptr, "glVertexAttrib2dv");
  gl_vertex_attrib2f = (PFNGLVERTEXATTRIB2FPROC)load(userptr, "glVertexAttrib2f");
  gl_vertex_attrib2fv = (PFNGLVERTEXATTRIB2FVPROC)load(userptr, "glVertexAttrib2fv");
  gl_vertex_attrib2s = (PFNGLVERTEXATTRIB2SPROC)load(userptr, "glVertexAttrib2s");
  gl_vertex_attrib2sv = (PFNGLVERTEXATTRIB2SVPROC)load(userptr, "glVertexAttrib2sv");
  gl_vertex_attrib3d = (PFNGLVERTEXATTRIB3DPROC)load(userptr, "glVertexAttrib3d");
  gl_vertex_attrib3dv = (PFNGLVERTEXATTRIB3DVPROC)load(userptr, "glVertexAttrib3dv");
  gl_vertex_attrib3f = (PFNGLVERTEXATTRIB3FPROC)load(userptr, "glVertexAttrib3f");
  gl_vertex_attrib3fv = (PFNGLVERTEXATTRIB3FVPROC)load(userptr, "glVertexAttrib3fv");
  gl_vertex_attrib3s = (PFNGLVERTEXATTRIB3SPROC)load(userptr, "glVertexAttrib3s");
  gl_vertex_attrib3sv = (PFNGLVERTEXATTRIB3SVPROC)load(userptr, "glVertexAttrib3sv");
  gl_vertex_attrib4nbv = (PFNGLVERTEXATTRIB4NBVPROC)load(userptr, "glVertexAttrib4Nbv");
  gl_vertex_attrib4niv = (PFNGLVERTEXATTRIB4NIVPROC)load(userptr, "glVertexAttrib4Niv");
  gl_vertex_attrib4nsv = (PFNGLVERTEXATTRIB4NSVPROC)load(userptr, "glVertexAttrib4Nsv");
  gl_vertex_attrib4nub = (PFNGLVERTEXATTRIB4NUBPROC)load(userptr, "glVertexAttrib4Nub");
  gl_vertex_attrib4nubv = (PFNGLVERTEXATTRIB4NUBVPROC)load(userptr, "glVertexAttrib4Nubv");
  gl_vertex_attrib4nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)load(userptr, "glVertexAttrib4Nuiv");
  gl_vertex_attrib4nusv = (PFNGLVERTEXATTRIB4NUSVPROC)load(userptr, "glVertexAttrib4Nusv");
  gl_vertex_attrib4bv = (PFNGLVERTEXATTRIB4BVPROC)load(userptr, "glVertexAttrib4bv");
  gl_vertex_attrib4d = (PFNGLVERTEXATTRIB4DPROC)load(userptr, "glVertexAttrib4d");
  gl_vertex_attrib4dv = (PFNGLVERTEXATTRIB4DVPROC)load(userptr, "glVertexAttrib4dv");
  gl_vertex_attrib4f = (PFNGLVERTEXATTRIB4FPROC)load(userptr, "glVertexAttrib4f");
  gl_vertex_attrib4fv = (PFNGLVERTEXATTRIB4FVPROC)load(userptr, "glVertexAttrib4fv");
  gl_vertex_attrib4iv = (PFNGLVERTEXATTRIB4IVPROC)load(userptr, "glVertexAttrib4iv");
  gl_vertex_attrib4s = (PFNGLVERTEXATTRIB4SPROC)load(userptr, "glVertexAttrib4s");
  gl_vertex_attrib4sv = (PFNGLVERTEXATTRIB4SVPROC)load(userptr, "glVertexAttrib4sv");
  gl_vertex_attrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)load(userptr, "glVertexAttrib4ubv");
  gl_vertex_attrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)load(userptr, "glVertexAttrib4uiv");
  gl_vertex_attrib4usv = (PFNGLVERTEXATTRIB4USVPROC)load(userptr, "glVertexAttrib4usv");
  gl_vertex_attrib_pointer = (PFNGLVERTEXATTRIBPOINTERPROC)load(userptr, "glVertexAttribPointer");
}
static void glext_load_gl_version_2_1(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_2_1) return;
  gl_uniform_matrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)load(userptr, "glUniformMatrix2x3fv");
  gl_uniform_matrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)load(userptr, "glUniformMatrix2x4fv");
  gl_uniform_matrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)load(userptr, "glUniformMatrix3x2fv");
  gl_uniform_matrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)load(userptr, "glUniformMatrix3x4fv");
  gl_uniform_matrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)load(userptr, "glUniformMatrix4x2fv");
  gl_uniform_matrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)load(userptr, "glUniformMatrix4x3fv");
}
static void glext_load_gl_version_3_0(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_3_0) return;
  gl_begin_conditional_render = (PFNGLBEGINCONDITIONALRENDERPROC)load(userptr, "glBeginConditionalRender");
  gl_begin_transform_feedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)load(userptr, "glBeginTransformFeedback");
  gl_bind_buffer_base = (PFNGLBINDBUFFERBASEPROC)load(userptr, "glBindBufferBase");
  gl_bind_buffer_range = (PFNGLBINDBUFFERRANGEPROC)load(userptr, "glBindBufferRange");
  gl_bind_frag_data_location = (PFNGLBINDFRAGDATALOCATIONPROC)load(userptr, "glBindFragDataLocation");
  gl_bind_framebuffer = (PFNGLBINDFRAMEBUFFERPROC)load(userptr, "glBindFramebuffer");
  gl_bind_renderbuffer = (PFNGLBINDRENDERBUFFERPROC)load(userptr, "glBindRenderbuffer");
  gl_bind_vertex_array = (PFNGLBINDVERTEXARRAYPROC)load(userptr, "glBindVertexArray");
  gl_blit_framebuffer = (PFNGLBLITFRAMEBUFFERPROC)load(userptr, "glBlitFramebuffer");
  gl_check_framebuffer_status = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)load(userptr, "glCheckFramebufferStatus");
  gl_clamp_color = (PFNGLCLAMPCOLORPROC)load(userptr, "glClampColor");
  gl_clear_bufferfi = (PFNGLCLEARBUFFERFIPROC)load(userptr, "glClearBufferfi");
  gl_clear_bufferfv = (PFNGLCLEARBUFFERFVPROC)load(userptr, "glClearBufferfv");
  gl_clear_bufferiv = (PFNGLCLEARBUFFERIVPROC)load(userptr, "glClearBufferiv");
  gl_clear_bufferuiv = (PFNGLCLEARBUFFERUIVPROC)load(userptr, "glClearBufferuiv");
  gl_color_maski = (PFNGLCOLORMASKIPROC)load(userptr, "glColorMaski");
  gl_delete_framebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)load(userptr, "glDeleteFramebuffers");
  gl_delete_renderbuffers = (PFNGLDELETERENDERBUFFERSPROC)load(userptr, "glDeleteRenderbuffers");
  gl_delete_vertex_arrays = (PFNGLDELETEVERTEXARRAYSPROC)load(userptr, "glDeleteVertexArrays");
  gl_disablei = (PFNGLDISABLEIPROC)load(userptr, "glDisablei");
  gl_enablei = (PFNGLENABLEIPROC)load(userptr, "glEnablei");
  gl_end_conditional_render = (PFNGLENDCONDITIONALRENDERPROC)load(userptr, "glEndConditionalRender");
  gl_end_transform_feedback = (PFNGLENDTRANSFORMFEEDBACKPROC)load(userptr, "glEndTransformFeedback");
  gl_flush_mapped_buffer_range = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)load(userptr, "glFlushMappedBufferRange");
  gl_framebuffer_renderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)load(userptr, "glFramebufferRenderbuffer");
  gl_framebuffer_texture1d = (PFNGLFRAMEBUFFERTEXTURE1DPROC)load(userptr, "glFramebufferTexture1D");
  gl_framebuffer_texture2d = (PFNGLFRAMEBUFFERTEXTURE2DPROC)load(userptr, "glFramebufferTexture2D");
  gl_framebuffer_texture3d = (PFNGLFRAMEBUFFERTEXTURE3DPROC)load(userptr, "glFramebufferTexture3D");
  gl_framebuffer_texture_layer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)load(userptr, "glFramebufferTextureLayer");
  gl_gen_framebuffers = (PFNGLGENFRAMEBUFFERSPROC)load(userptr, "glGenFramebuffers");
  gl_gen_renderbuffers = (PFNGLGENRENDERBUFFERSPROC)load(userptr, "glGenRenderbuffers");
  gl_gen_vertex_arrays = (PFNGLGENVERTEXARRAYSPROC)load(userptr, "glGenVertexArrays");
  gl_generate_mipmap = (PFNGLGENERATEMIPMAPPROC)load(userptr, "glGenerateMipmap");
  gl_get_booleani_v = (PFNGLGETBOOLEANI_VPROC)load(userptr, "glGetBooleani_v");
  gl_get_frag_data_location = (PFNGLGETFRAGDATALOCATIONPROC)load(userptr, "glGetFragDataLocation");
  gl_get_framebuffer_attachment_parameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)load(userptr, "glGetFramebufferAttachmentParameteriv");
  gl_get_integeri_v = (PFNGLGETINTEGERI_VPROC)load(userptr, "glGetIntegeri_v");
  gl_get_renderbuffer_parameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)load(userptr, "glGetRenderbufferParameteriv");
  gl_get_stringi = (PFNGLGETSTRINGIPROC)load(userptr, "glGetStringi");
  gl_get_tex_parameter_iiv = (PFNGLGETTEXPARAMETERIIVPROC)load(userptr, "glGetTexParameterIiv");
  gl_get_tex_parameter_iuiv = (PFNGLGETTEXPARAMETERIUIVPROC)load(userptr, "glGetTexParameterIuiv");
  gl_get_transform_feedback_varying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)load(userptr, "glGetTransformFeedbackVarying");
  gl_get_uniformuiv = (PFNGLGETUNIFORMUIVPROC)load(userptr, "glGetUniformuiv");
  gl_get_vertex_attrib_iiv = (PFNGLGETVERTEXATTRIBIIVPROC)load(userptr, "glGetVertexAttribIiv");
  gl_get_vertex_attrib_iuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)load(userptr, "glGetVertexAttribIuiv");
  gl_is_enabledi = (PFNGLISENABLEDIPROC)load(userptr, "glIsEnabledi");
  gl_is_framebuffer = (PFNGLISFRAMEBUFFERPROC)load(userptr, "glIsFramebuffer");
  gl_is_renderbuffer = (PFNGLISRENDERBUFFERPROC)load(userptr, "glIsRenderbuffer");
  gl_is_vertex_array = (PFNGLISVERTEXARRAYPROC)load(userptr, "glIsVertexArray");
  gl_map_buffer_range = (PFNGLMAPBUFFERRANGEPROC)load(userptr, "glMapBufferRange");
  gl_renderbuffer_storage = (PFNGLRENDERBUFFERSTORAGEPROC)load(userptr, "glRenderbufferStorage");
  gl_renderbuffer_storage_multisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)load(userptr, "glRenderbufferStorageMultisample");
  gl_tex_parameter_iiv = (PFNGLTEXPARAMETERIIVPROC)load(userptr, "glTexParameterIiv");
  gl_tex_parameter_iuiv = (PFNGLTEXPARAMETERIUIVPROC)load(userptr, "glTexParameterIuiv");
  gl_transform_feedback_varyings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)load(userptr, "glTransformFeedbackVaryings");
  gl_uniform1ui = (PFNGLUNIFORM1UIPROC)load(userptr, "glUniform1ui");
  gl_uniform1uiv = (PFNGLUNIFORM1UIVPROC)load(userptr, "glUniform1uiv");
  gl_uniform2ui = (PFNGLUNIFORM2UIPROC)load(userptr, "glUniform2ui");
  gl_uniform2uiv = (PFNGLUNIFORM2UIVPROC)load(userptr, "glUniform2uiv");
  gl_uniform3ui = (PFNGLUNIFORM3UIPROC)load(userptr, "glUniform3ui");
  gl_uniform3uiv = (PFNGLUNIFORM3UIVPROC)load(userptr, "glUniform3uiv");
  gl_uniform4ui = (PFNGLUNIFORM4UIPROC)load(userptr, "glUniform4ui");
  gl_uniform4uiv = (PFNGLUNIFORM4UIVPROC)load(userptr, "glUniform4uiv");
  gl_vertex_attrib_i1i = (PFNGLVERTEXATTRIBI1IPROC)load(userptr, "glVertexAttribI1i");
  gl_vertex_attrib_i1iv = (PFNGLVERTEXATTRIBI1IVPROC)load(userptr, "glVertexAttribI1iv");
  gl_vertex_attrib_i1ui = (PFNGLVERTEXATTRIBI1UIPROC)load(userptr, "glVertexAttribI1ui");
  gl_vertex_attrib_i1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)load(userptr, "glVertexAttribI1uiv");
  gl_vertex_attrib_i2i = (PFNGLVERTEXATTRIBI2IPROC)load(userptr, "glVertexAttribI2i");
  gl_vertex_attrib_i2iv = (PFNGLVERTEXATTRIBI2IVPROC)load(userptr, "glVertexAttribI2iv");
  gl_vertex_attrib_i2ui = (PFNGLVERTEXATTRIBI2UIPROC)load(userptr, "glVertexAttribI2ui");
  gl_vertex_attrib_i2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)load(userptr, "glVertexAttribI2uiv");
  gl_vertex_attrib_i3i = (PFNGLVERTEXATTRIBI3IPROC)load(userptr, "glVertexAttribI3i");
  gl_vertex_attrib_i3iv = (PFNGLVERTEXATTRIBI3IVPROC)load(userptr, "glVertexAttribI3iv");
  gl_vertex_attrib_i3ui = (PFNGLVERTEXATTRIBI3UIPROC)load(userptr, "glVertexAttribI3ui");
  gl_vertex_attrib_i3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)load(userptr, "glVertexAttribI3uiv");
  gl_vertex_attrib_i4bv = (PFNGLVERTEXATTRIBI4BVPROC)load(userptr, "glVertexAttribI4bv");
  gl_vertex_attrib_i4i = (PFNGLVERTEXATTRIBI4IPROC)load(userptr, "glVertexAttribI4i");
  gl_vertex_attrib_i4iv = (PFNGLVERTEXATTRIBI4IVPROC)load(userptr, "glVertexAttribI4iv");
  gl_vertex_attrib_i4sv = (PFNGLVERTEXATTRIBI4SVPROC)load(userptr, "glVertexAttribI4sv");
  gl_vertex_attrib_i4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)load(userptr, "glVertexAttribI4ubv");
  gl_vertex_attrib_i4ui = (PFNGLVERTEXATTRIBI4UIPROC)load(userptr, "glVertexAttribI4ui");
  gl_vertex_attrib_i4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)load(userptr, "glVertexAttribI4uiv");
  gl_vertex_attrib_i4usv = (PFNGLVERTEXATTRIBI4USVPROC)load(userptr, "glVertexAttribI4usv");
  gl_vertex_attrib_i_pointer = (PFNGLVERTEXATTRIBIPOINTERPROC)load(userptr, "glVertexAttribIPointer");
}
static void glext_load_gl_version_3_1(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_3_1) return;
  gl_bind_buffer_base = (PFNGLBINDBUFFERBASEPROC)load(userptr, "glBindBufferBase");
  gl_bind_buffer_range = (PFNGLBINDBUFFERRANGEPROC)load(userptr, "glBindBufferRange");
  gl_copy_buffer_sub_data = (PFNGLCOPYBUFFERSUBDATAPROC)load(userptr, "glCopyBufferSubData");
  gl_draw_arrays_instanced = (PFNGLDRAWARRAYSINSTANCEDPROC)load(userptr, "glDrawArraysInstanced");
  gl_draw_elements_instanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)load(userptr, "glDrawElementsInstanced");
  gl_get_active_uniform_block_name = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)load(userptr, "glGetActiveUniformBlockName");
  gl_get_active_uniform_blockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)load(userptr, "glGetActiveUniformBlockiv");
  gl_get_active_uniform_name = (PFNGLGETACTIVEUNIFORMNAMEPROC)load(userptr, "glGetActiveUniformName");
  gl_get_active_uniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)load(userptr, "glGetActiveUniformsiv");
  gl_get_integeri_v = (PFNGLGETINTEGERI_VPROC)load(userptr, "glGetIntegeri_v");
  gl_get_uniform_block_index = (PFNGLGETUNIFORMBLOCKINDEXPROC)load(userptr, "glGetUniformBlockIndex");
  gl_get_uniform_indices = (PFNGLGETUNIFORMINDICESPROC)load(userptr, "glGetUniformIndices");
  gl_primitive_restart_index = (PFNGLPRIMITIVERESTARTINDEXPROC)load(userptr, "glPrimitiveRestartIndex");
  gl_tex_buffer = (PFNGLTEXBUFFERPROC)load(userptr, "glTexBuffer");
  gl_uniform_block_binding = (PFNGLUNIFORMBLOCKBINDINGPROC)load(userptr, "glUniformBlockBinding");
}
static void glext_load_gl_version_3_2(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_3_2) return;
  gl_client_wait_sync = (PFNGLCLIENTWAITSYNCPROC)load(userptr, "glClientWaitSync");
  gl_delete_sync = (PFNGLDELETESYNCPROC)load(userptr, "glDeleteSync");
  gl_draw_elements_base_vertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)load(userptr, "glDrawElementsBaseVertex");
  gl_draw_elements_instanced_base_vertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)load(userptr, "glDrawElementsInstancedBaseVertex");
  gl_draw_range_elements_base_vertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)load(userptr, "glDrawRangeElementsBaseVertex");
  gl_fence_sync = (PFNGLFENCESYNCPROC)load(userptr, "glFenceSync");
  gl_framebuffer_texture = (PFNGLFRAMEBUFFERTEXTUREPROC)load(userptr, "glFramebufferTexture");
  gl_get_buffer_parameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)load(userptr, "glGetBufferParameteri64v");
  gl_get_integer64i_v = (PFNGLGETINTEGER64I_VPROC)load(userptr, "glGetInteger64i_v");
  gl_get_integer64v = (PFNGLGETINTEGER64VPROC)load(userptr, "glGetInteger64v");
  gl_get_multisamplefv = (PFNGLGETMULTISAMPLEFVPROC)load(userptr, "glGetMultisamplefv");
  gl_get_synciv = (PFNGLGETSYNCIVPROC)load(userptr, "glGetSynciv");
  gl_is_sync = (PFNGLISSYNCPROC)load(userptr, "glIsSync");
  gl_multi_draw_elements_base_vertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)load(userptr, "glMultiDrawElementsBaseVertex");
  gl_provoking_vertex = (PFNGLPROVOKINGVERTEXPROC)load(userptr, "glProvokingVertex");
  gl_sample_maski = (PFNGLSAMPLEMASKIPROC)load(userptr, "glSampleMaski");
  gl_tex_image2d_multisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)load(userptr, "glTexImage2DMultisample");
  gl_tex_image3d_multisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)load(userptr, "glTexImage3DMultisample");
  gl_wait_sync = (PFNGLWAITSYNCPROC)load(userptr, "glWaitSync");
}
static void glext_load_gl_version_3_3(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_VERSION_3_3) return;
  gl_bind_frag_data_location_indexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)load(userptr, "glBindFragDataLocationIndexed");
  gl_bind_sampler = (PFNGLBINDSAMPLERPROC)load(userptr, "glBindSampler");
  gl_delete_samplers = (PFNGLDELETESAMPLERSPROC)load(userptr, "glDeleteSamplers");
  gl_gen_samplers = (PFNGLGENSAMPLERSPROC)load(userptr, "glGenSamplers");
  gl_get_frag_data_index = (PFNGLGETFRAGDATAINDEXPROC)load(userptr, "glGetFragDataIndex");
  gl_get_query_objecti64v = (PFNGLGETQUERYOBJECTI64VPROC)load(userptr, "glGetQueryObjecti64v");
  gl_get_query_objectui64v = (PFNGLGETQUERYOBJECTUI64VPROC)load(userptr, "glGetQueryObjectui64v");
  gl_get_sampler_parameter_iiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)load(userptr, "glGetSamplerParameterIiv");
  gl_get_sampler_parameter_iuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)load(userptr, "glGetSamplerParameterIuiv");
  gl_get_sampler_parameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)load(userptr, "glGetSamplerParameterfv");
  gl_get_sampler_parameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)load(userptr, "glGetSamplerParameteriv");
  gl_is_sampler = (PFNGLISSAMPLERPROC)load(userptr, "glIsSampler");
  gl_query_counter = (PFNGLQUERYCOUNTERPROC)load(userptr, "glQueryCounter");
  gl_sampler_parameter_iiv = (PFNGLSAMPLERPARAMETERIIVPROC)load(userptr, "glSamplerParameterIiv");
  gl_sampler_parameter_iuiv = (PFNGLSAMPLERPARAMETERIUIVPROC)load(userptr, "glSamplerParameterIuiv");
  gl_sampler_parameterf = (PFNGLSAMPLERPARAMETERFPROC)load(userptr, "glSamplerParameterf");
  gl_sampler_parameterfv = (PFNGLSAMPLERPARAMETERFVPROC)load(userptr, "glSamplerParameterfv");
  gl_sampler_parameteri = (PFNGLSAMPLERPARAMETERIPROC)load(userptr, "glSamplerParameteri");
  gl_sampler_parameteriv = (PFNGLSAMPLERPARAMETERIVPROC)load(userptr, "glSamplerParameteriv");
  gl_vertex_attrib_divisor = (PFNGLVERTEXATTRIBDIVISORPROC)load(userptr, "glVertexAttribDivisor");
  gl_vertex_attrib_p1ui = (PFNGLVERTEXATTRIBP1UIPROC)load(userptr, "glVertexAttribP1ui");
  gl_vertex_attrib_p1uiv = (PFNGLVERTEXATTRIBP1UIVPROC)load(userptr, "glVertexAttribP1uiv");
  gl_vertex_attrib_p2ui = (PFNGLVERTEXATTRIBP2UIPROC)load(userptr, "glVertexAttribP2ui");
  gl_vertex_attrib_p2uiv = (PFNGLVERTEXATTRIBP2UIVPROC)load(userptr, "glVertexAttribP2uiv");
  gl_vertex_attrib_p3ui = (PFNGLVERTEXATTRIBP3UIPROC)load(userptr, "glVertexAttribP3ui");
  gl_vertex_attrib_p3uiv = (PFNGLVERTEXATTRIBP3UIVPROC)load(userptr, "glVertexAttribP3uiv");
  gl_vertex_attrib_p4ui = (PFNGLVERTEXATTRIBP4UIPROC)load(userptr, "glVertexAttribP4ui");
  gl_vertex_attrib_p4uiv = (PFNGLVERTEXATTRIBP4UIVPROC)load(userptr, "glVertexAttribP4uiv");
}
static void glext_load_gl_arb_base_instance(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_ARB_base_instance) return;
  gl_draw_arrays_instanced_base_instance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)load(userptr, "glDrawArraysInstancedBaseInstance");
  gl_draw_elements_instanced_base_instance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)load(userptr, "glDrawElementsInstancedBaseInstance");
  gl_draw_elements_instanced_base_vertex_base_instance =
      (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)load(userptr, "glDrawElementsInstancedBaseVertexBaseInstance");
}
static void glext_load_gl_arb_draw_indirect(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_ARB_draw_indirect) return;
  gl_draw_arrays_indirect = (PFNGLDRAWARRAYSINDIRECTPROC)load(userptr, "glDrawArraysIndirect");
  gl_draw_elements_indirect = (PFNGLDRAWELEMENTSINDIRECTPROC)load(userptr, "glDrawElementsIndirect");
}
static void glext_load_gl_arb_multi_draw_indirect(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_ARB_multi_draw_indirect) return;
  gl_multi_draw_arrays_indirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC)load(userptr, "glMultiDrawArraysIndirect");
  gl_multi_draw_elements_indirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC)load(userptr, "glMultiDrawElementsIndirect");
}
static void glext_load_gl_arb_separate_shader_objects(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_ARB_separate_shader_objects) return;
  gl_active_shader_program = (PFNGLACTIVESHADERPROGRAMPROC)load(userptr, "glActiveShaderProgram");
  gl_bind_program_pipeline = (PFNGLBINDPROGRAMPIPELINEPROC)load(userptr, "glBindProgramPipeline");
  gl_create_shader_programv = (PFNGLCREATESHADERPROGRAMVPROC)load(userptr, "glCreateShaderProgramv");
  gl_delete_program_pipelines = (PFNGLDELETEPROGRAMPIPELINESPROC)load(userptr, "glDeleteProgramPipelines");
  gl_gen_program_pipelines = (PFNGLGENPROGRAMPIPELINESPROC)load(userptr, "glGenProgramPipelines");
  gl_get_program_pipeline_info_log = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC)load(userptr, "glGetProgramPipelineInfoLog");
  gl_get_program_pipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC)load(userptr, "glGetProgramPipelineiv");
  gl_is_program_pipeline = (PFNGLISPROGRAMPIPELINEPROC)load(userptr, "glIsProgramPipeline");
  gl_program_parameteri = (PFNGLPROGRAMPARAMETERIPROC)load(userptr, "glProgramParameteri");
  gl_program_uniform1d = (PFNGLPROGRAMUNIFORM1DPROC)load(userptr, "glProgramUniform1d");
  gl_program_uniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC)load(userptr, "glProgramUniform1dv");
  gl_program_uniform1f = (PFNGLPROGRAMUNIFORM1FPROC)load(userptr, "glProgramUniform1f");
  gl_program_uniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC)load(userptr, "glProgramUniform1fv");
  gl_program_uniform1i = (PFNGLPROGRAMUNIFORM1IPROC)load(userptr, "glProgramUniform1i");
  gl_program_uniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC)load(userptr, "glProgramUniform1iv");
  gl_program_uniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC)load(userptr, "glProgramUniform1ui");
  gl_program_uniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC)load(userptr, "glProgramUniform1uiv");
  gl_program_uniform2d = (PFNGLPROGRAMUNIFORM2DPROC)load(userptr, "glProgramUniform2d");
  gl_program_uniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC)load(userptr, "glProgramUniform2dv");
  gl_program_uniform2f = (PFNGLPROGRAMUNIFORM2FPROC)load(userptr, "glProgramUniform2f");
  gl_program_uniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC)load(userptr, "glProgramUniform2fv");
  gl_program_uniform2i = (PFNGLPROGRAMUNIFORM2IPROC)load(userptr, "glProgramUniform2i");
  gl_program_uniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC)load(userptr, "glProgramUniform2iv");
  gl_program_uniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC)load(userptr, "glProgramUniform2ui");
  gl_program_uniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC)load(userptr, "glProgramUniform2uiv");
  gl_program_uniform3d = (PFNGLPROGRAMUNIFORM3DPROC)load(userptr, "glProgramUniform3d");
  gl_program_uniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC)load(userptr, "glProgramUniform3dv");
  gl_program_uniform3f = (PFNGLPROGRAMUNIFORM3FPROC)load(userptr, "glProgramUniform3f");
  gl_program_uniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC)load(userptr, "glProgramUniform3fv");
  gl_program_uniform3i = (PFNGLPROGRAMUNIFORM3IPROC)load(userptr, "glProgramUniform3i");
  gl_program_uniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC)load(userptr, "glProgramUniform3iv");
  gl_program_uniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC)load(userptr, "glProgramUniform3ui");
  gl_program_uniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC)load(userptr, "glProgramUniform3uiv");
  gl_program_uniform4d = (PFNGLPROGRAMUNIFORM4DPROC)load(userptr, "glProgramUniform4d");
  gl_program_uniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC)load(userptr, "glProgramUniform4dv");
  gl_program_uniform4f = (PFNGLPROGRAMUNIFORM4FPROC)load(userptr, "glProgramUniform4f");
  gl_program_uniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC)load(userptr, "glProgramUniform4fv");
  gl_program_uniform4i = (PFNGLPROGRAMUNIFORM4IPROC)load(userptr, "glProgramUniform4i");
  gl_program_uniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC)load(userptr, "glProgramUniform4iv");
  gl_program_uniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC)load(userptr, "glProgramUniform4ui");
  gl_program_uniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC)load(userptr, "glProgramUniform4uiv");
  gl_program_uniform_matrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC)load(userptr, "glProgramUniformMatrix2dv");
  gl_program_uniform_matrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC)load(userptr, "glProgramUniformMatrix2fv");
  gl_program_uniform_matrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)load(userptr, "glProgramUniformMatrix2x3dv");
  gl_program_uniform_matrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)load(userptr, "glProgramUniformMatrix2x3fv");
  gl_program_uniform_matrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)load(userptr, "glProgramUniformMatrix2x4dv");
  gl_program_uniform_matrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)load(userptr, "glProgramUniformMatrix2x4fv");
  gl_program_uniform_matrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC)load(userptr, "glProgramUniformMatrix3dv");
  gl_program_uniform_matrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC)load(userptr, "glProgramUniformMatrix3fv");
  gl_program_uniform_matrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)load(userptr, "glProgramUniformMatrix3x2dv");
  gl_program_uniform_matrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)load(userptr, "glProgramUniformMatrix3x2fv");
  gl_program_uniform_matrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)load(userptr, "glProgramUniformMatrix3x4dv");
  gl_program_uniform_matrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)load(userptr, "glProgramUniformMatrix3x4fv");
  gl_program_uniform_matrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC)load(userptr, "glProgramUniformMatrix4dv");
  gl_program_uniform_matrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC)load(userptr, "glProgramUniformMatrix4fv");
  gl_program_uniform_matrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)load(userptr, "glProgramUniformMatrix4x2dv");
  gl_program_uniform_matrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)load(userptr, "glProgramUniformMatrix4x2fv");
  gl_program_uniform_matrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)load(userptr, "glProgramUniformMatrix4x3dv");
  gl_program_uniform_matrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)load(userptr, "glProgramUniformMatrix4x3fv");
  gl_use_program_stages = (PFNGLUSEPROGRAMSTAGESPROC)load(userptr, "glUseProgramStages");
  gl_validate_program_pipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC)load(userptr, "glValidateProgramPipeline");
}
static void glext_load_gl_arb_texture_buffer_range(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_ARB_texture_buffer_range) return;
  gl_tex_buffer_range = (PFNGLTEXBUFFERRANGEPROC)load(userptr, "glTexBufferRange");
}
static void glext_load_gl_arb_texture_storage(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_ARB_texture_storage) return;
  gl_tex_storage1d = (PFNGLTEXSTORAGE1DPROC)load(userptr, "glTexStorage1D");
  gl_tex_storage2d = (PFNGLTEXSTORAGE2DPROC)load(userptr, "glTexStorage2D");
  gl_tex_storage3d = (PFNGLTEXSTORAGE3DPROC)load(userptr, "glTexStorage3D");
}
static void glext_load_gl_arb_vertex_attrib_binding(GLADuserptrloadfunc load, void *userptr) {
  if (!GLEXT_GL_ARB_vertex_attrib_binding) return;
  gl_bind_vertex_buffer = (PFNGLBINDVERTEXBUFFERPROC)load(userptr, "glBindVertexBuffer");
  gl_vertex_attrib_binding = (PFNGLVERTEXATTRIBBINDINGPROC)load(userptr, "glVertexAttribBinding");
  gl_vertex_attrib_format = (PFNGLVERTEXATTRIBFORMATPROC)load(userptr, "glVertexAttribFormat");
  gl_vertex_attrib_i_format = (PFNGLVERTEXATTRIBIFORMATPROC)load(userptr, "glVertexAttribIFormat");
  gl_vertex_attrib_l_format = (PFNGLVERTEXATTRIBLFORMATPROC)load(userptr, "glVertexAttribLFormat");
  gl_vertex_binding_divisor = (PFNGLVERTEXBINDINGDIVISORPROC)load(userptr, "glVertexBindingDivisor");
}

static void glext_free_extensions(char **exts_i) {
  if (exts_i != NULL) {
    unsigned int index;
    for (index = 0; exts_i[index]; index++) { free((void *)(exts_i[index])); }
    free((void *)exts_i);
    exts_i = NULL;
  }
}
static int glext_get_extensions(const char **out_exts, char ***out_exts_i) {
#if defined(GL_ES_VERSION_3_0) || defined(GL_VERSION_3_0)
  if (gl_get_stringi != NULL && gl_get_integerv != NULL) {
    unsigned int index = 0;
    unsigned int num_exts_i = 0;
    char **exts_i = NULL;
    gl_get_integerv(GL_NUM_EXTENSIONS, (int *)&num_exts_i);
    exts_i = (char **)malloc((num_exts_i + 1) * (sizeof *exts_i));
    if (exts_i == NULL) { return 0; }
    for (index = 0; index < num_exts_i; index++) {
      const char *gl_str_tmp = (const char *)gl_get_stringi(GL_EXTENSIONS, index);
      size_t len = strlen(gl_str_tmp) + 1;

      char *local_str = (char *)malloc(len * sizeof(char));
      if (local_str == NULL) {
        exts_i[index] = NULL;
        glext_free_extensions(exts_i);
        return 0;
      }

      memcpy(local_str, gl_str_tmp, len * sizeof(char));
      exts_i[index] = local_str;
    }
    exts_i[index] = NULL;

    *out_exts_i = exts_i;

    return 1;
  }
#else
  GLEXT_UNUSED(out_exts_i);
#endif
  if (gl_get_string == NULL) { return 0; }
  *out_exts = (const char *)gl_get_string(GL_EXTENSIONS);
  return 1;
}
static int glext_has_extension(const char *exts, char **exts_i, const char *ext) {
  if (exts_i) {
    unsigned int index;
    for (index = 0; exts_i[index]; index++) {
      const char *e = exts_i[index];
      if (strcmp(e, ext) == 0) { return 1; }
    }
  } else {
    const char *extensions;
    const char *loc;
    const char *terminator;
    extensions = exts;
    if (extensions == NULL || ext == NULL) { return 0; }
    while (1) {
      loc = strstr(extensions, ext);
      if (loc == NULL) { return 0; }
      terminator = loc + strlen(ext);
      if ((loc == extensions || *(loc - 1) == ' ') && (*terminator == ' ' || *terminator == '\0')) { return 1; }
      extensions = terminator;
    }
  }
  return 0;
}

static GLADapiproc glext_get_proc_from_userptr(void *userptr, const char *name) {
  return (GLEXT_GNUC_EXTENSION(GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glext_find_extensions_gl(void) {
  const char *exts = NULL;
  char **exts_i = NULL;
  if (!glext_get_extensions(&exts, &exts_i)) return 0;

  GLEXT_GL_ARB_base_instance = glext_has_extension(exts, exts_i, "GL_ARB_base_instance");
  GLEXT_GL_ARB_draw_indirect = glext_has_extension(exts, exts_i, "GL_ARB_draw_indirect");
  GLEXT_GL_ARB_explicit_uniform_location = glext_has_extension(exts, exts_i, "GL_ARB_explicit_uniform_location");
  GLEXT_GL_ARB_map_buffer_alignment = glext_has_extension(exts, exts_i, "GL_ARB_map_buffer_alignment");
  GLEXT_GL_ARB_multi_draw_indirect = glext_has_extension(exts, exts_i, "GL_ARB_multi_draw_indirect");
  GLEXT_GL_ARB_separate_shader_objects = glext_has_extension(exts, exts_i, "GL_ARB_separate_shader_objects");
  GLEXT_GL_ARB_shading_language_420pack = glext_has_extension(exts, exts_i, "GL_ARB_shading_language_420pack");
  GLEXT_GL_ARB_texture_buffer_range = glext_has_extension(exts, exts_i, "GL_ARB_texture_buffer_range");
  GLEXT_GL_ARB_texture_storage = glext_has_extension(exts, exts_i, "GL_ARB_texture_storage");
  GLEXT_GL_ARB_vertex_attrib_binding = glext_has_extension(exts, exts_i, "GL_ARB_vertex_attrib_binding");

  glext_free_extensions(exts_i);

  return 1;
}

static int glext_find_core_gl(void) {
  int i;
  const char *version;
  const char *prefixes[] = {"OpenGL ES-CM ", "OpenGL ES-CL ", "OpenGL ES ", "OpenGL SC ", NULL};
  int major = 0;
  int minor = 0;
  version = (const char *)gl_get_string(GL_VERSION);
  if (!version) return 0;
  for (i = 0; prefixes[i]; i++) {
    const size_t length = strlen(prefixes[i]);
    if (strncmp(version, prefixes[i], length) == 0) {
      version += length;
      break;
    }
  }

  GLEXT_IMPL_UTIL_SSCANF(version, "%d.%d", &major, &minor);

  GLEXT_GL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
  GLEXT_GL_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
  GLEXT_GL_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
  GLEXT_GL_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
  GLEXT_GL_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
  GLEXT_GL_VERSION_1_5 = (major == 1 && minor >= 5) || major > 1;
  GLEXT_GL_VERSION_2_0 = (major == 2 && minor >= 0) || major > 2;
  GLEXT_GL_VERSION_2_1 = (major == 2 && minor >= 1) || major > 2;
  GLEXT_GL_VERSION_3_0 = (major == 3 && minor >= 0) || major > 3;
  GLEXT_GL_VERSION_3_1 = (major == 3 && minor >= 1) || major > 3;
  GLEXT_GL_VERSION_3_2 = (major == 3 && minor >= 2) || major > 3;
  GLEXT_GL_VERSION_3_3 = (major == 3 && minor >= 3) || major > 3;

  return GLEXT_MAKE_VERSION(major, minor);
}

int glext_load_gl_user_ptr(GLADuserptrloadfunc load, void *userptr) {
  int version;

  gl_get_string = (PFNGLGETSTRINGPROC)load(userptr, "glGetString");
  if (gl_get_string == NULL) return 0;
  version = glext_find_core_gl();

  glext_load_gl_version_1_0(load, userptr);
  glext_load_gl_version_1_1(load, userptr);
  glext_load_gl_version_1_2(load, userptr);
  glext_load_gl_version_1_3(load, userptr);
  glext_load_gl_version_1_4(load, userptr);
  glext_load_gl_version_1_5(load, userptr);
  glext_load_gl_version_2_0(load, userptr);
  glext_load_gl_version_2_1(load, userptr);
  glext_load_gl_version_3_0(load, userptr);
  glext_load_gl_version_3_1(load, userptr);
  glext_load_gl_version_3_2(load, userptr);
  glext_load_gl_version_3_3(load, userptr);

  if (!glext_find_extensions_gl()) return 0;
  glext_load_gl_arb_base_instance(load, userptr);
  glext_load_gl_arb_draw_indirect(load, userptr);
  glext_load_gl_arb_multi_draw_indirect(load, userptr);
  glext_load_gl_arb_separate_shader_objects(load, userptr);
  glext_load_gl_arb_texture_buffer_range(load, userptr);
  glext_load_gl_arb_texture_storage(load, userptr);
  glext_load_gl_arb_vertex_attrib_binding(load, userptr);

  return version;
}

int glext_load_gl(GLADloadfunc load) { return glext_load_gl_user_ptr(glext_get_proc_from_userptr, GLEXT_GNUC_EXTENSION(void *) load); }

#ifdef __cplusplus
}
#endif
