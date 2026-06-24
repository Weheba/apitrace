/*
 * Legacy OpenGL enum definitions for compatibility with GLAD core profile.
 *
 * GLAD's GL 4.1 core profile doesn't include deprecated/removed enums.
 * These definitions allow code that references legacy enums to compile,
 * even though the functionality they represent may not be available.
 *
 * This file is auto-generated from the Khronos GL headers.
 */

#pragma once

// Only define these when using GLAD (which provides core profile only)
#if defined(USE_GLAD)

// Ensure APIENTRY is defined
#ifndef APIENTRY
#define APIENTRY
#endif
#ifndef APIENTRYP
#define APIENTRYP APIENTRY *
#endif

#ifndef GL_VERSION_1_1
#define GL_VERSION_1_1                    1
#endif
#ifndef GL_VERSION_1_2
#define GL_VERSION_1_2                    1
#endif
#ifndef GL_ARB_imaging
#define GL_ARB_imaging                    1
#endif
#ifndef GL_ARB_multitexture
#define GL_ARB_multitexture               1
#endif
#ifndef GL_ACCUM
#define GL_ACCUM                          0x0100
#endif
#ifndef GL_LOAD
#define GL_LOAD                           0x0101
#endif
#ifndef GL_RETURN
#define GL_RETURN                         0x0102
#endif
#ifndef GL_MULT
#define GL_MULT                           0x0103
#endif
#ifndef GL_ADD
#define GL_ADD                            0x0104
#endif
#ifndef GL_NEVER
#define GL_NEVER                          0x0200
#endif
#ifndef GL_LESS
#define GL_LESS                           0x0201
#endif
#ifndef GL_EQUAL
#define GL_EQUAL                          0x0202
#endif
#ifndef GL_LEQUAL
#define GL_LEQUAL                         0x0203
#endif
#ifndef GL_GREATER
#define GL_GREATER                        0x0204
#endif
#ifndef GL_NOTEQUAL
#define GL_NOTEQUAL                       0x0205
#endif
#ifndef GL_GEQUAL
#define GL_GEQUAL                         0x0206
#endif
#ifndef GL_ALWAYS
#define GL_ALWAYS                         0x0207
#endif
#ifndef GL_CURRENT_BIT
#define GL_CURRENT_BIT                    0x00000001
#endif
#ifndef GL_POINT_BIT
#define GL_POINT_BIT                      0x00000002
#endif
#ifndef GL_LINE_BIT
#define GL_LINE_BIT                       0x00000004
#endif
#ifndef GL_POLYGON_BIT
#define GL_POLYGON_BIT                    0x00000008
#endif
#ifndef GL_POLYGON_STIPPLE_BIT
#define GL_POLYGON_STIPPLE_BIT            0x00000010
#endif
#ifndef GL_PIXEL_MODE_BIT
#define GL_PIXEL_MODE_BIT                 0x00000020
#endif
#ifndef GL_LIGHTING_BIT
#define GL_LIGHTING_BIT                   0x00000040
#endif
#ifndef GL_FOG_BIT
#define GL_FOG_BIT                        0x00000080
#endif
#ifndef GL_DEPTH_BUFFER_BIT
#define GL_DEPTH_BUFFER_BIT               0x00000100
#endif
#ifndef GL_ACCUM_BUFFER_BIT
#define GL_ACCUM_BUFFER_BIT               0x00000200
#endif
#ifndef GL_STENCIL_BUFFER_BIT
#define GL_STENCIL_BUFFER_BIT             0x00000400
#endif
#ifndef GL_VIEWPORT_BIT
#define GL_VIEWPORT_BIT                   0x00000800
#endif
#ifndef GL_TRANSFORM_BIT
#define GL_TRANSFORM_BIT                  0x00001000
#endif
#ifndef GL_ENABLE_BIT
#define GL_ENABLE_BIT                     0x00002000
#endif
#ifndef GL_COLOR_BUFFER_BIT
#define GL_COLOR_BUFFER_BIT               0x00004000
#endif
#ifndef GL_HINT_BIT
#define GL_HINT_BIT                       0x00008000
#endif
#ifndef GL_EVAL_BIT
#define GL_EVAL_BIT                       0x00010000
#endif
#ifndef GL_LIST_BIT
#define GL_LIST_BIT                       0x00020000
#endif
#ifndef GL_TEXTURE_BIT
#define GL_TEXTURE_BIT                    0x00040000
#endif
#ifndef GL_SCISSOR_BIT
#define GL_SCISSOR_BIT                    0x00080000
#endif
#ifndef GL_ALL_ATTRIB_BITS
#define GL_ALL_ATTRIB_BITS                0x000fffff
#endif
#ifndef GL_POINTS
#define GL_POINTS                         0x0000
#endif
#ifndef GL_LINES
#define GL_LINES                          0x0001
#endif
#ifndef GL_LINE_LOOP
#define GL_LINE_LOOP                      0x0002
#endif
#ifndef GL_LINE_STRIP
#define GL_LINE_STRIP                     0x0003
#endif
#ifndef GL_TRIANGLES
#define GL_TRIANGLES                      0x0004
#endif
#ifndef GL_TRIANGLE_STRIP
#define GL_TRIANGLE_STRIP                 0x0005
#endif
#ifndef GL_TRIANGLE_FAN
#define GL_TRIANGLE_FAN                   0x0006
#endif
#ifndef GL_QUADS
#define GL_QUADS                          0x0007
#endif
#ifndef GL_QUAD_STRIP
#define GL_QUAD_STRIP                     0x0008
#endif
#ifndef GL_POLYGON
#define GL_POLYGON                        0x0009
#endif
#ifndef GL_ZERO
#define GL_ZERO                           0
#endif
#ifndef GL_ONE
#define GL_ONE                            1
#endif
#ifndef GL_SRC_COLOR
#define GL_SRC_COLOR                      0x0300
#endif
#ifndef GL_ONE_MINUS_SRC_COLOR
#define GL_ONE_MINUS_SRC_COLOR            0x0301
#endif
#ifndef GL_SRC_ALPHA
#define GL_SRC_ALPHA                      0x0302
#endif
#ifndef GL_ONE_MINUS_SRC_ALPHA
#define GL_ONE_MINUS_SRC_ALPHA            0x0303
#endif
#ifndef GL_DST_ALPHA
#define GL_DST_ALPHA                      0x0304
#endif
#ifndef GL_ONE_MINUS_DST_ALPHA
#define GL_ONE_MINUS_DST_ALPHA            0x0305
#endif
#ifndef GL_DST_COLOR
#define GL_DST_COLOR                      0x0306
#endif
#ifndef GL_ONE_MINUS_DST_COLOR
#define GL_ONE_MINUS_DST_COLOR            0x0307
#endif
#ifndef GL_SRC_ALPHA_SATURATE
#define GL_SRC_ALPHA_SATURATE             0x0308
#endif
#ifndef GL_TRUE
#define GL_TRUE                           1
#endif
#ifndef GL_FALSE
#define GL_FALSE                          0
#endif
#ifndef GL_CLIP_PLANE0
#define GL_CLIP_PLANE0                    0x3000
#endif
#ifndef GL_CLIP_PLANE1
#define GL_CLIP_PLANE1                    0x3001
#endif
#ifndef GL_CLIP_PLANE2
#define GL_CLIP_PLANE2                    0x3002
#endif
#ifndef GL_CLIP_PLANE3
#define GL_CLIP_PLANE3                    0x3003
#endif
#ifndef GL_CLIP_PLANE4
#define GL_CLIP_PLANE4                    0x3004
#endif
#ifndef GL_CLIP_PLANE5
#define GL_CLIP_PLANE5                    0x3005
#endif
#ifndef GL_BYTE
#define GL_BYTE                           0x1400
#endif
#ifndef GL_UNSIGNED_BYTE
#define GL_UNSIGNED_BYTE                  0x1401
#endif
#ifndef GL_SHORT
#define GL_SHORT                          0x1402
#endif
#ifndef GL_UNSIGNED_SHORT
#define GL_UNSIGNED_SHORT                 0x1403
#endif
#ifndef GL_INT
#define GL_INT                            0x1404
#endif
#ifndef GL_UNSIGNED_INT
#define GL_UNSIGNED_INT                   0x1405
#endif
#ifndef GL_FLOAT
#define GL_FLOAT                          0x1406
#endif
#ifndef GL_2_BYTES
#define GL_2_BYTES                        0x1407
#endif
#ifndef GL_3_BYTES
#define GL_3_BYTES                        0x1408
#endif
#ifndef GL_4_BYTES
#define GL_4_BYTES                        0x1409
#endif
#ifndef GL_DOUBLE
#define GL_DOUBLE                         0x140A
#endif
#ifndef GL_NONE
#define GL_NONE                           0
#endif
#ifndef GL_FRONT_LEFT
#define GL_FRONT_LEFT                     0x0400
#endif
#ifndef GL_FRONT_RIGHT
#define GL_FRONT_RIGHT                    0x0401
#endif
#ifndef GL_BACK_LEFT
#define GL_BACK_LEFT                      0x0402
#endif
#ifndef GL_BACK_RIGHT
#define GL_BACK_RIGHT                     0x0403
#endif
#ifndef GL_FRONT
#define GL_FRONT                          0x0404
#endif
#ifndef GL_BACK
#define GL_BACK                           0x0405
#endif
#ifndef GL_LEFT
#define GL_LEFT                           0x0406
#endif
#ifndef GL_RIGHT
#define GL_RIGHT                          0x0407
#endif
#ifndef GL_FRONT_AND_BACK
#define GL_FRONT_AND_BACK                 0x0408
#endif
#ifndef GL_AUX0
#define GL_AUX0                           0x0409
#endif
#ifndef GL_AUX1
#define GL_AUX1                           0x040A
#endif
#ifndef GL_AUX2
#define GL_AUX2                           0x040B
#endif
#ifndef GL_AUX3
#define GL_AUX3                           0x040C
#endif
#ifndef GL_NO_ERROR
#define GL_NO_ERROR                       0
#endif
#ifndef GL_INVALID_ENUM
#define GL_INVALID_ENUM                   0x0500
#endif
#ifndef GL_INVALID_VALUE
#define GL_INVALID_VALUE                  0x0501
#endif
#ifndef GL_INVALID_OPERATION
#define GL_INVALID_OPERATION              0x0502
#endif
#ifndef GL_STACK_OVERFLOW
#define GL_STACK_OVERFLOW                 0x0503
#endif
#ifndef GL_STACK_UNDERFLOW
#define GL_STACK_UNDERFLOW                0x0504
#endif
#ifndef GL_OUT_OF_MEMORY
#define GL_OUT_OF_MEMORY                  0x0505
#endif
#ifndef GL_2D
#define GL_2D                             0x0600
#endif
#ifndef GL_3D
#define GL_3D                             0x0601
#endif
#ifndef GL_3D_COLOR
#define GL_3D_COLOR                       0x0602
#endif
#ifndef GL_3D_COLOR_TEXTURE
#define GL_3D_COLOR_TEXTURE               0x0603
#endif
#ifndef GL_4D_COLOR_TEXTURE
#define GL_4D_COLOR_TEXTURE               0x0604
#endif
#ifndef GL_PASS_THROUGH_TOKEN
#define GL_PASS_THROUGH_TOKEN             0x0700
#endif
#ifndef GL_POINT_TOKEN
#define GL_POINT_TOKEN                    0x0701
#endif
#ifndef GL_LINE_TOKEN
#define GL_LINE_TOKEN                     0x0702
#endif
#ifndef GL_POLYGON_TOKEN
#define GL_POLYGON_TOKEN                  0x0703
#endif
#ifndef GL_BITMAP_TOKEN
#define GL_BITMAP_TOKEN                   0x0704
#endif
#ifndef GL_DRAW_PIXEL_TOKEN
#define GL_DRAW_PIXEL_TOKEN               0x0705
#endif
#ifndef GL_COPY_PIXEL_TOKEN
#define GL_COPY_PIXEL_TOKEN               0x0706
#endif
#ifndef GL_LINE_RESET_TOKEN
#define GL_LINE_RESET_TOKEN               0x0707
#endif
#ifndef GL_EXP
#define GL_EXP                            0x0800
#endif
#ifndef GL_EXP2
#define GL_EXP2                           0x0801
#endif
#ifndef GL_CW
#define GL_CW                             0x0900
#endif
#ifndef GL_CCW
#define GL_CCW                            0x0901
#endif
#ifndef GL_COEFF
#define GL_COEFF                          0x0A00
#endif
#ifndef GL_ORDER
#define GL_ORDER                          0x0A01
#endif
#ifndef GL_DOMAIN
#define GL_DOMAIN                         0x0A02
#endif
#ifndef GL_CURRENT_COLOR
#define GL_CURRENT_COLOR                  0x0B00
#endif
#ifndef GL_CURRENT_INDEX
#define GL_CURRENT_INDEX                  0x0B01
#endif
#ifndef GL_CURRENT_NORMAL
#define GL_CURRENT_NORMAL                 0x0B02
#endif
#ifndef GL_CURRENT_TEXTURE_COORDS
#define GL_CURRENT_TEXTURE_COORDS         0x0B03
#endif
#ifndef GL_CURRENT_RASTER_COLOR
#define GL_CURRENT_RASTER_COLOR           0x0B04
#endif
#ifndef GL_CURRENT_RASTER_INDEX
#define GL_CURRENT_RASTER_INDEX           0x0B05
#endif
#ifndef GL_CURRENT_RASTER_TEXTURE_COORDS
#define GL_CURRENT_RASTER_TEXTURE_COORDS  0x0B06
#endif
#ifndef GL_CURRENT_RASTER_POSITION
#define GL_CURRENT_RASTER_POSITION        0x0B07
#endif
#ifndef GL_CURRENT_RASTER_POSITION_VALID
#define GL_CURRENT_RASTER_POSITION_VALID  0x0B08
#endif
#ifndef GL_CURRENT_RASTER_DISTANCE
#define GL_CURRENT_RASTER_DISTANCE        0x0B09
#endif
#ifndef GL_POINT_SMOOTH
#define GL_POINT_SMOOTH                   0x0B10
#endif
#ifndef GL_POINT_SIZE
#define GL_POINT_SIZE                     0x0B11
#endif
#ifndef GL_POINT_SIZE_RANGE
#define GL_POINT_SIZE_RANGE               0x0B12
#endif
#ifndef GL_POINT_SIZE_GRANULARITY
#define GL_POINT_SIZE_GRANULARITY         0x0B13
#endif
#ifndef GL_LINE_SMOOTH
#define GL_LINE_SMOOTH                    0x0B20
#endif
#ifndef GL_LINE_WIDTH
#define GL_LINE_WIDTH                     0x0B21
#endif
#ifndef GL_LINE_WIDTH_RANGE
#define GL_LINE_WIDTH_RANGE               0x0B22
#endif
#ifndef GL_LINE_WIDTH_GRANULARITY
#define GL_LINE_WIDTH_GRANULARITY         0x0B23
#endif
#ifndef GL_LINE_STIPPLE
#define GL_LINE_STIPPLE                   0x0B24
#endif
#ifndef GL_LINE_STIPPLE_PATTERN
#define GL_LINE_STIPPLE_PATTERN           0x0B25
#endif
#ifndef GL_LINE_STIPPLE_REPEAT
#define GL_LINE_STIPPLE_REPEAT            0x0B26
#endif
#ifndef GL_LIST_MODE
#define GL_LIST_MODE                      0x0B30
#endif
#ifndef GL_MAX_LIST_NESTING
#define GL_MAX_LIST_NESTING               0x0B31
#endif
#ifndef GL_LIST_BASE
#define GL_LIST_BASE                      0x0B32
#endif
#ifndef GL_LIST_INDEX
#define GL_LIST_INDEX                     0x0B33
#endif
#ifndef GL_POLYGON_MODE
#define GL_POLYGON_MODE                   0x0B40
#endif
#ifndef GL_POLYGON_SMOOTH
#define GL_POLYGON_SMOOTH                 0x0B41
#endif
#ifndef GL_POLYGON_STIPPLE
#define GL_POLYGON_STIPPLE                0x0B42
#endif
#ifndef GL_EDGE_FLAG
#define GL_EDGE_FLAG                      0x0B43
#endif
#ifndef GL_CULL_FACE
#define GL_CULL_FACE                      0x0B44
#endif
#ifndef GL_CULL_FACE_MODE
#define GL_CULL_FACE_MODE                 0x0B45
#endif
#ifndef GL_FRONT_FACE
#define GL_FRONT_FACE                     0x0B46
#endif
#ifndef GL_LIGHTING
#define GL_LIGHTING                       0x0B50
#endif
#ifndef GL_LIGHT_MODEL_LOCAL_VIEWER
#define GL_LIGHT_MODEL_LOCAL_VIEWER       0x0B51
#endif
#ifndef GL_LIGHT_MODEL_TWO_SIDE
#define GL_LIGHT_MODEL_TWO_SIDE           0x0B52
#endif
#ifndef GL_LIGHT_MODEL_AMBIENT
#define GL_LIGHT_MODEL_AMBIENT            0x0B53
#endif
#ifndef GL_SHADE_MODEL
#define GL_SHADE_MODEL                    0x0B54
#endif
#ifndef GL_COLOR_MATERIAL_FACE
#define GL_COLOR_MATERIAL_FACE            0x0B55
#endif
#ifndef GL_COLOR_MATERIAL_PARAMETER
#define GL_COLOR_MATERIAL_PARAMETER       0x0B56
#endif
#ifndef GL_COLOR_MATERIAL
#define GL_COLOR_MATERIAL                 0x0B57
#endif
#ifndef GL_FOG
#define GL_FOG                            0x0B60
#endif
#ifndef GL_FOG_INDEX
#define GL_FOG_INDEX                      0x0B61
#endif
#ifndef GL_FOG_DENSITY
#define GL_FOG_DENSITY                    0x0B62
#endif
#ifndef GL_FOG_START
#define GL_FOG_START                      0x0B63
#endif
#ifndef GL_FOG_END
#define GL_FOG_END                        0x0B64
#endif
#ifndef GL_FOG_MODE
#define GL_FOG_MODE                       0x0B65
#endif
#ifndef GL_FOG_COLOR
#define GL_FOG_COLOR                      0x0B66
#endif
#ifndef GL_DEPTH_RANGE
#define GL_DEPTH_RANGE                    0x0B70
#endif
#ifndef GL_DEPTH_TEST
#define GL_DEPTH_TEST                     0x0B71
#endif
#ifndef GL_DEPTH_WRITEMASK
#define GL_DEPTH_WRITEMASK                0x0B72
#endif
#ifndef GL_DEPTH_CLEAR_VALUE
#define GL_DEPTH_CLEAR_VALUE              0x0B73
#endif
#ifndef GL_DEPTH_FUNC
#define GL_DEPTH_FUNC                     0x0B74
#endif
#ifndef GL_ACCUM_CLEAR_VALUE
#define GL_ACCUM_CLEAR_VALUE              0x0B80
#endif
#ifndef GL_STENCIL_TEST
#define GL_STENCIL_TEST                   0x0B90
#endif
#ifndef GL_STENCIL_CLEAR_VALUE
#define GL_STENCIL_CLEAR_VALUE            0x0B91
#endif
#ifndef GL_STENCIL_FUNC
#define GL_STENCIL_FUNC                   0x0B92
#endif
#ifndef GL_STENCIL_VALUE_MASK
#define GL_STENCIL_VALUE_MASK             0x0B93
#endif
#ifndef GL_STENCIL_FAIL
#define GL_STENCIL_FAIL                   0x0B94
#endif
#ifndef GL_STENCIL_PASS_DEPTH_FAIL
#define GL_STENCIL_PASS_DEPTH_FAIL        0x0B95
#endif
#ifndef GL_STENCIL_PASS_DEPTH_PASS
#define GL_STENCIL_PASS_DEPTH_PASS        0x0B96
#endif
#ifndef GL_STENCIL_REF
#define GL_STENCIL_REF                    0x0B97
#endif
#ifndef GL_STENCIL_WRITEMASK
#define GL_STENCIL_WRITEMASK              0x0B98
#endif
#ifndef GL_MATRIX_MODE
#define GL_MATRIX_MODE                    0x0BA0
#endif
#ifndef GL_NORMALIZE
#define GL_NORMALIZE                      0x0BA1
#endif
#ifndef GL_VIEWPORT
#define GL_VIEWPORT                       0x0BA2
#endif
#ifndef GL_MODELVIEW_STACK_DEPTH
#define GL_MODELVIEW_STACK_DEPTH          0x0BA3
#endif
#ifndef GL_PROJECTION_STACK_DEPTH
#define GL_PROJECTION_STACK_DEPTH         0x0BA4
#endif
#ifndef GL_TEXTURE_STACK_DEPTH
#define GL_TEXTURE_STACK_DEPTH            0x0BA5
#endif
#ifndef GL_MODELVIEW_MATRIX
#define GL_MODELVIEW_MATRIX               0x0BA6
#endif
#ifndef GL_PROJECTION_MATRIX
#define GL_PROJECTION_MATRIX              0x0BA7
#endif
#ifndef GL_TEXTURE_MATRIX
#define GL_TEXTURE_MATRIX                 0x0BA8
#endif
#ifndef GL_ATTRIB_STACK_DEPTH
#define GL_ATTRIB_STACK_DEPTH             0x0BB0
#endif
#ifndef GL_CLIENT_ATTRIB_STACK_DEPTH
#define GL_CLIENT_ATTRIB_STACK_DEPTH      0x0BB1
#endif
#ifndef GL_ALPHA_TEST
#define GL_ALPHA_TEST                     0x0BC0
#endif
#ifndef GL_ALPHA_TEST_FUNC
#define GL_ALPHA_TEST_FUNC                0x0BC1
#endif
#ifndef GL_ALPHA_TEST_REF
#define GL_ALPHA_TEST_REF                 0x0BC2
#endif
#ifndef GL_DITHER
#define GL_DITHER                         0x0BD0
#endif
#ifndef GL_BLEND_DST
#define GL_BLEND_DST                      0x0BE0
#endif
#ifndef GL_BLEND_SRC
#define GL_BLEND_SRC                      0x0BE1
#endif
#ifndef GL_BLEND
#define GL_BLEND                          0x0BE2
#endif
#ifndef GL_LOGIC_OP_MODE
#define GL_LOGIC_OP_MODE                  0x0BF0
#endif
#ifndef GL_INDEX_LOGIC_OP
#define GL_INDEX_LOGIC_OP                 0x0BF1
#endif
#ifndef GL_COLOR_LOGIC_OP
#define GL_COLOR_LOGIC_OP                 0x0BF2
#endif
#ifndef GL_AUX_BUFFERS
#define GL_AUX_BUFFERS                    0x0C00
#endif
#ifndef GL_DRAW_BUFFER
#define GL_DRAW_BUFFER                    0x0C01
#endif
#ifndef GL_READ_BUFFER
#define GL_READ_BUFFER                    0x0C02
#endif
#ifndef GL_SCISSOR_BOX
#define GL_SCISSOR_BOX                    0x0C10
#endif
#ifndef GL_SCISSOR_TEST
#define GL_SCISSOR_TEST                   0x0C11
#endif
#ifndef GL_INDEX_CLEAR_VALUE
#define GL_INDEX_CLEAR_VALUE              0x0C20
#endif
#ifndef GL_INDEX_WRITEMASK
#define GL_INDEX_WRITEMASK                0x0C21
#endif
#ifndef GL_COLOR_CLEAR_VALUE
#define GL_COLOR_CLEAR_VALUE              0x0C22
#endif
#ifndef GL_COLOR_WRITEMASK
#define GL_COLOR_WRITEMASK                0x0C23
#endif
#ifndef GL_INDEX_MODE
#define GL_INDEX_MODE                     0x0C30
#endif
#ifndef GL_RGBA_MODE
#define GL_RGBA_MODE                      0x0C31
#endif
#ifndef GL_DOUBLEBUFFER
#define GL_DOUBLEBUFFER                   0x0C32
#endif
#ifndef GL_STEREO
#define GL_STEREO                         0x0C33
#endif
#ifndef GL_RENDER_MODE
#define GL_RENDER_MODE                    0x0C40
#endif
#ifndef GL_PERSPECTIVE_CORRECTION_HINT
#define GL_PERSPECTIVE_CORRECTION_HINT    0x0C50
#endif
#ifndef GL_POINT_SMOOTH_HINT
#define GL_POINT_SMOOTH_HINT              0x0C51
#endif
#ifndef GL_LINE_SMOOTH_HINT
#define GL_LINE_SMOOTH_HINT               0x0C52
#endif
#ifndef GL_POLYGON_SMOOTH_HINT
#define GL_POLYGON_SMOOTH_HINT            0x0C53
#endif
#ifndef GL_FOG_HINT
#define GL_FOG_HINT                       0x0C54
#endif
#ifndef GL_TEXTURE_GEN_S
#define GL_TEXTURE_GEN_S                  0x0C60
#endif
#ifndef GL_TEXTURE_GEN_T
#define GL_TEXTURE_GEN_T                  0x0C61
#endif
#ifndef GL_TEXTURE_GEN_R
#define GL_TEXTURE_GEN_R                  0x0C62
#endif
#ifndef GL_TEXTURE_GEN_Q
#define GL_TEXTURE_GEN_Q                  0x0C63
#endif
#ifndef GL_PIXEL_MAP_I_TO_I
#define GL_PIXEL_MAP_I_TO_I               0x0C70
#endif
#ifndef GL_PIXEL_MAP_S_TO_S
#define GL_PIXEL_MAP_S_TO_S               0x0C71
#endif
#ifndef GL_PIXEL_MAP_I_TO_R
#define GL_PIXEL_MAP_I_TO_R               0x0C72
#endif
#ifndef GL_PIXEL_MAP_I_TO_G
#define GL_PIXEL_MAP_I_TO_G               0x0C73
#endif
#ifndef GL_PIXEL_MAP_I_TO_B
#define GL_PIXEL_MAP_I_TO_B               0x0C74
#endif
#ifndef GL_PIXEL_MAP_I_TO_A
#define GL_PIXEL_MAP_I_TO_A               0x0C75
#endif
#ifndef GL_PIXEL_MAP_R_TO_R
#define GL_PIXEL_MAP_R_TO_R               0x0C76
#endif
#ifndef GL_PIXEL_MAP_G_TO_G
#define GL_PIXEL_MAP_G_TO_G               0x0C77
#endif
#ifndef GL_PIXEL_MAP_B_TO_B
#define GL_PIXEL_MAP_B_TO_B               0x0C78
#endif
#ifndef GL_PIXEL_MAP_A_TO_A
#define GL_PIXEL_MAP_A_TO_A               0x0C79
#endif
#ifndef GL_PIXEL_MAP_I_TO_I_SIZE
#define GL_PIXEL_MAP_I_TO_I_SIZE          0x0CB0
#endif
#ifndef GL_PIXEL_MAP_S_TO_S_SIZE
#define GL_PIXEL_MAP_S_TO_S_SIZE          0x0CB1
#endif
#ifndef GL_PIXEL_MAP_I_TO_R_SIZE
#define GL_PIXEL_MAP_I_TO_R_SIZE          0x0CB2
#endif
#ifndef GL_PIXEL_MAP_I_TO_G_SIZE
#define GL_PIXEL_MAP_I_TO_G_SIZE          0x0CB3
#endif
#ifndef GL_PIXEL_MAP_I_TO_B_SIZE
#define GL_PIXEL_MAP_I_TO_B_SIZE          0x0CB4
#endif
#ifndef GL_PIXEL_MAP_I_TO_A_SIZE
#define GL_PIXEL_MAP_I_TO_A_SIZE          0x0CB5
#endif
#ifndef GL_PIXEL_MAP_R_TO_R_SIZE
#define GL_PIXEL_MAP_R_TO_R_SIZE          0x0CB6
#endif
#ifndef GL_PIXEL_MAP_G_TO_G_SIZE
#define GL_PIXEL_MAP_G_TO_G_SIZE          0x0CB7
#endif
#ifndef GL_PIXEL_MAP_B_TO_B_SIZE
#define GL_PIXEL_MAP_B_TO_B_SIZE          0x0CB8
#endif
#ifndef GL_PIXEL_MAP_A_TO_A_SIZE
#define GL_PIXEL_MAP_A_TO_A_SIZE          0x0CB9
#endif
#ifndef GL_UNPACK_SWAP_BYTES
#define GL_UNPACK_SWAP_BYTES              0x0CF0
#endif
#ifndef GL_UNPACK_LSB_FIRST
#define GL_UNPACK_LSB_FIRST               0x0CF1
#endif
#ifndef GL_UNPACK_ROW_LENGTH
#define GL_UNPACK_ROW_LENGTH              0x0CF2
#endif
#ifndef GL_UNPACK_SKIP_ROWS
#define GL_UNPACK_SKIP_ROWS               0x0CF3
#endif
#ifndef GL_UNPACK_SKIP_PIXELS
#define GL_UNPACK_SKIP_PIXELS             0x0CF4
#endif
#ifndef GL_UNPACK_ALIGNMENT
#define GL_UNPACK_ALIGNMENT               0x0CF5
#endif
#ifndef GL_PACK_SWAP_BYTES
#define GL_PACK_SWAP_BYTES                0x0D00
#endif
#ifndef GL_PACK_LSB_FIRST
#define GL_PACK_LSB_FIRST                 0x0D01
#endif
#ifndef GL_PACK_ROW_LENGTH
#define GL_PACK_ROW_LENGTH                0x0D02
#endif
#ifndef GL_PACK_SKIP_ROWS
#define GL_PACK_SKIP_ROWS                 0x0D03
#endif
#ifndef GL_PACK_SKIP_PIXELS
#define GL_PACK_SKIP_PIXELS               0x0D04
#endif
#ifndef GL_PACK_ALIGNMENT
#define GL_PACK_ALIGNMENT                 0x0D05
#endif
#ifndef GL_MAP_COLOR
#define GL_MAP_COLOR                      0x0D10
#endif
#ifndef GL_MAP_STENCIL
#define GL_MAP_STENCIL                    0x0D11
#endif
#ifndef GL_INDEX_SHIFT
#define GL_INDEX_SHIFT                    0x0D12
#endif
#ifndef GL_INDEX_OFFSET
#define GL_INDEX_OFFSET                   0x0D13
#endif
#ifndef GL_RED_SCALE
#define GL_RED_SCALE                      0x0D14
#endif
#ifndef GL_RED_BIAS
#define GL_RED_BIAS                       0x0D15
#endif
#ifndef GL_ZOOM_X
#define GL_ZOOM_X                         0x0D16
#endif
#ifndef GL_ZOOM_Y
#define GL_ZOOM_Y                         0x0D17
#endif
#ifndef GL_GREEN_SCALE
#define GL_GREEN_SCALE                    0x0D18
#endif
#ifndef GL_GREEN_BIAS
#define GL_GREEN_BIAS                     0x0D19
#endif
#ifndef GL_BLUE_SCALE
#define GL_BLUE_SCALE                     0x0D1A
#endif
#ifndef GL_BLUE_BIAS
#define GL_BLUE_BIAS                      0x0D1B
#endif
#ifndef GL_ALPHA_SCALE
#define GL_ALPHA_SCALE                    0x0D1C
#endif
#ifndef GL_ALPHA_BIAS
#define GL_ALPHA_BIAS                     0x0D1D
#endif
#ifndef GL_DEPTH_SCALE
#define GL_DEPTH_SCALE                    0x0D1E
#endif
#ifndef GL_DEPTH_BIAS
#define GL_DEPTH_BIAS                     0x0D1F
#endif
#ifndef GL_MAX_EVAL_ORDER
#define GL_MAX_EVAL_ORDER                 0x0D30
#endif
#ifndef GL_MAX_LIGHTS
#define GL_MAX_LIGHTS                     0x0D31
#endif
#ifndef GL_MAX_CLIP_PLANES
#define GL_MAX_CLIP_PLANES                0x0D32
#endif
#ifndef GL_MAX_TEXTURE_SIZE
#define GL_MAX_TEXTURE_SIZE               0x0D33
#endif
#ifndef GL_MAX_PIXEL_MAP_TABLE
#define GL_MAX_PIXEL_MAP_TABLE            0x0D34
#endif
#ifndef GL_MAX_ATTRIB_STACK_DEPTH
#define GL_MAX_ATTRIB_STACK_DEPTH         0x0D35
#endif
#ifndef GL_MAX_MODELVIEW_STACK_DEPTH
#define GL_MAX_MODELVIEW_STACK_DEPTH      0x0D36
#endif
#ifndef GL_MAX_NAME_STACK_DEPTH
#define GL_MAX_NAME_STACK_DEPTH           0x0D37
#endif
#ifndef GL_MAX_PROJECTION_STACK_DEPTH
#define GL_MAX_PROJECTION_STACK_DEPTH     0x0D38
#endif
#ifndef GL_MAX_TEXTURE_STACK_DEPTH
#define GL_MAX_TEXTURE_STACK_DEPTH        0x0D39
#endif
#ifndef GL_MAX_VIEWPORT_DIMS
#define GL_MAX_VIEWPORT_DIMS              0x0D3A
#endif
#ifndef GL_MAX_CLIENT_ATTRIB_STACK_DEPTH
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH  0x0D3B
#endif
#ifndef GL_SUBPIXEL_BITS
#define GL_SUBPIXEL_BITS                  0x0D50
#endif
#ifndef GL_INDEX_BITS
#define GL_INDEX_BITS                     0x0D51
#endif
#ifndef GL_RED_BITS
#define GL_RED_BITS                       0x0D52
#endif
#ifndef GL_GREEN_BITS
#define GL_GREEN_BITS                     0x0D53
#endif
#ifndef GL_BLUE_BITS
#define GL_BLUE_BITS                      0x0D54
#endif
#ifndef GL_ALPHA_BITS
#define GL_ALPHA_BITS                     0x0D55
#endif
#ifndef GL_DEPTH_BITS
#define GL_DEPTH_BITS                     0x0D56
#endif
#ifndef GL_STENCIL_BITS
#define GL_STENCIL_BITS                   0x0D57
#endif
#ifndef GL_ACCUM_RED_BITS
#define GL_ACCUM_RED_BITS                 0x0D58
#endif
#ifndef GL_ACCUM_GREEN_BITS
#define GL_ACCUM_GREEN_BITS               0x0D59
#endif
#ifndef GL_ACCUM_BLUE_BITS
#define GL_ACCUM_BLUE_BITS                0x0D5A
#endif
#ifndef GL_ACCUM_ALPHA_BITS
#define GL_ACCUM_ALPHA_BITS               0x0D5B
#endif
#ifndef GL_NAME_STACK_DEPTH
#define GL_NAME_STACK_DEPTH               0x0D70
#endif
#ifndef GL_AUTO_NORMAL
#define GL_AUTO_NORMAL                    0x0D80
#endif
#ifndef GL_MAP1_COLOR_4
#define GL_MAP1_COLOR_4                   0x0D90
#endif
#ifndef GL_MAP1_INDEX
#define GL_MAP1_INDEX                     0x0D91
#endif
#ifndef GL_MAP1_NORMAL
#define GL_MAP1_NORMAL                    0x0D92
#endif
#ifndef GL_MAP1_TEXTURE_COORD_1
#define GL_MAP1_TEXTURE_COORD_1           0x0D93
#endif
#ifndef GL_MAP1_TEXTURE_COORD_2
#define GL_MAP1_TEXTURE_COORD_2           0x0D94
#endif
#ifndef GL_MAP1_TEXTURE_COORD_3
#define GL_MAP1_TEXTURE_COORD_3           0x0D95
#endif
#ifndef GL_MAP1_TEXTURE_COORD_4
#define GL_MAP1_TEXTURE_COORD_4           0x0D96
#endif
#ifndef GL_MAP1_VERTEX_3
#define GL_MAP1_VERTEX_3                  0x0D97
#endif
#ifndef GL_MAP1_VERTEX_4
#define GL_MAP1_VERTEX_4                  0x0D98
#endif
#ifndef GL_MAP2_COLOR_4
#define GL_MAP2_COLOR_4                   0x0DB0
#endif
#ifndef GL_MAP2_INDEX
#define GL_MAP2_INDEX                     0x0DB1
#endif
#ifndef GL_MAP2_NORMAL
#define GL_MAP2_NORMAL                    0x0DB2
#endif
#ifndef GL_MAP2_TEXTURE_COORD_1
#define GL_MAP2_TEXTURE_COORD_1           0x0DB3
#endif
#ifndef GL_MAP2_TEXTURE_COORD_2
#define GL_MAP2_TEXTURE_COORD_2           0x0DB4
#endif
#ifndef GL_MAP2_TEXTURE_COORD_3
#define GL_MAP2_TEXTURE_COORD_3           0x0DB5
#endif
#ifndef GL_MAP2_TEXTURE_COORD_4
#define GL_MAP2_TEXTURE_COORD_4           0x0DB6
#endif
#ifndef GL_MAP2_VERTEX_3
#define GL_MAP2_VERTEX_3                  0x0DB7
#endif
#ifndef GL_MAP2_VERTEX_4
#define GL_MAP2_VERTEX_4                  0x0DB8
#endif
#ifndef GL_MAP1_GRID_DOMAIN
#define GL_MAP1_GRID_DOMAIN               0x0DD0
#endif
#ifndef GL_MAP1_GRID_SEGMENTS
#define GL_MAP1_GRID_SEGMENTS             0x0DD1
#endif
#ifndef GL_MAP2_GRID_DOMAIN
#define GL_MAP2_GRID_DOMAIN               0x0DD2
#endif
#ifndef GL_MAP2_GRID_SEGMENTS
#define GL_MAP2_GRID_SEGMENTS             0x0DD3
#endif
#ifndef GL_TEXTURE_1D
#define GL_TEXTURE_1D                     0x0DE0
#endif
#ifndef GL_TEXTURE_2D
#define GL_TEXTURE_2D                     0x0DE1
#endif
#ifndef GL_FEEDBACK_BUFFER_POINTER
#define GL_FEEDBACK_BUFFER_POINTER        0x0DF0
#endif
#ifndef GL_FEEDBACK_BUFFER_SIZE
#define GL_FEEDBACK_BUFFER_SIZE           0x0DF1
#endif
#ifndef GL_FEEDBACK_BUFFER_TYPE
#define GL_FEEDBACK_BUFFER_TYPE           0x0DF2
#endif
#ifndef GL_SELECTION_BUFFER_POINTER
#define GL_SELECTION_BUFFER_POINTER       0x0DF3
#endif
#ifndef GL_SELECTION_BUFFER_SIZE
#define GL_SELECTION_BUFFER_SIZE          0x0DF4
#endif
#ifndef GL_TEXTURE_WIDTH
#define GL_TEXTURE_WIDTH                  0x1000
#endif
#ifndef GL_TEXTURE_HEIGHT
#define GL_TEXTURE_HEIGHT                 0x1001
#endif
#ifndef GL_TEXTURE_INTERNAL_FORMAT
#define GL_TEXTURE_INTERNAL_FORMAT        0x1003
#endif
#ifndef GL_TEXTURE_BORDER_COLOR
#define GL_TEXTURE_BORDER_COLOR           0x1004
#endif
#ifndef GL_TEXTURE_BORDER
#define GL_TEXTURE_BORDER                 0x1005
#endif
#ifndef GL_DONT_CARE
#define GL_DONT_CARE                      0x1100
#endif
#ifndef GL_FASTEST
#define GL_FASTEST                        0x1101
#endif
#ifndef GL_NICEST
#define GL_NICEST                         0x1102
#endif
#ifndef GL_LIGHT0
#define GL_LIGHT0                         0x4000
#endif
#ifndef GL_LIGHT1
#define GL_LIGHT1                         0x4001
#endif
#ifndef GL_LIGHT2
#define GL_LIGHT2                         0x4002
#endif
#ifndef GL_LIGHT3
#define GL_LIGHT3                         0x4003
#endif
#ifndef GL_LIGHT4
#define GL_LIGHT4                         0x4004
#endif
#ifndef GL_LIGHT5
#define GL_LIGHT5                         0x4005
#endif
#ifndef GL_LIGHT6
#define GL_LIGHT6                         0x4006
#endif
#ifndef GL_LIGHT7
#define GL_LIGHT7                         0x4007
#endif
#ifndef GL_AMBIENT
#define GL_AMBIENT                        0x1200
#endif
#ifndef GL_DIFFUSE
#define GL_DIFFUSE                        0x1201
#endif
#ifndef GL_SPECULAR
#define GL_SPECULAR                       0x1202
#endif
#ifndef GL_POSITION
#define GL_POSITION                       0x1203
#endif
#ifndef GL_SPOT_DIRECTION
#define GL_SPOT_DIRECTION                 0x1204
#endif
#ifndef GL_SPOT_EXPONENT
#define GL_SPOT_EXPONENT                  0x1205
#endif
#ifndef GL_SPOT_CUTOFF
#define GL_SPOT_CUTOFF                    0x1206
#endif
#ifndef GL_CONSTANT_ATTENUATION
#define GL_CONSTANT_ATTENUATION           0x1207
#endif
#ifndef GL_LINEAR_ATTENUATION
#define GL_LINEAR_ATTENUATION             0x1208
#endif
#ifndef GL_QUADRATIC_ATTENUATION
#define GL_QUADRATIC_ATTENUATION          0x1209
#endif
#ifndef GL_COMPILE
#define GL_COMPILE                        0x1300
#endif
#ifndef GL_COMPILE_AND_EXECUTE
#define GL_COMPILE_AND_EXECUTE            0x1301
#endif
#ifndef GL_CLEAR
#define GL_CLEAR                          0x1500
#endif
#ifndef GL_AND
#define GL_AND                            0x1501
#endif
#ifndef GL_AND_REVERSE
#define GL_AND_REVERSE                    0x1502
#endif
#ifndef GL_COPY
#define GL_COPY                           0x1503
#endif
#ifndef GL_AND_INVERTED
#define GL_AND_INVERTED                   0x1504
#endif
#ifndef GL_NOOP
#define GL_NOOP                           0x1505
#endif
#ifndef GL_XOR
#define GL_XOR                            0x1506
#endif
#ifndef GL_OR
#define GL_OR                             0x1507
#endif
#ifndef GL_NOR
#define GL_NOR                            0x1508
#endif
#ifndef GL_EQUIV
#define GL_EQUIV                          0x1509
#endif
#ifndef GL_INVERT
#define GL_INVERT                         0x150A
#endif
#ifndef GL_OR_REVERSE
#define GL_OR_REVERSE                     0x150B
#endif
#ifndef GL_COPY_INVERTED
#define GL_COPY_INVERTED                  0x150C
#endif
#ifndef GL_OR_INVERTED
#define GL_OR_INVERTED                    0x150D
#endif
#ifndef GL_NAND
#define GL_NAND                           0x150E
#endif
#ifndef GL_SET
#define GL_SET                            0x150F
#endif
#ifndef GL_EMISSION
#define GL_EMISSION                       0x1600
#endif
#ifndef GL_SHININESS
#define GL_SHININESS                      0x1601
#endif
#ifndef GL_AMBIENT_AND_DIFFUSE
#define GL_AMBIENT_AND_DIFFUSE            0x1602
#endif
#ifndef GL_COLOR_INDEXES
#define GL_COLOR_INDEXES                  0x1603
#endif
#ifndef GL_MODELVIEW
#define GL_MODELVIEW                      0x1700
#endif
#ifndef GL_PROJECTION
#define GL_PROJECTION                     0x1701
#endif
#ifndef GL_TEXTURE
#define GL_TEXTURE                        0x1702
#endif
#ifndef GL_COLOR
#define GL_COLOR                          0x1800
#endif
#ifndef GL_DEPTH
#define GL_DEPTH                          0x1801
#endif
#ifndef GL_STENCIL
#define GL_STENCIL                        0x1802
#endif
#ifndef GL_COLOR_INDEX
#define GL_COLOR_INDEX                    0x1900
#endif
#ifndef GL_STENCIL_INDEX
#define GL_STENCIL_INDEX                  0x1901
#endif
#ifndef GL_DEPTH_COMPONENT
#define GL_DEPTH_COMPONENT                0x1902
#endif
#ifndef GL_RED
#define GL_RED                            0x1903
#endif
#ifndef GL_GREEN
#define GL_GREEN                          0x1904
#endif
#ifndef GL_BLUE
#define GL_BLUE                           0x1905
#endif
#ifndef GL_ALPHA
#define GL_ALPHA                          0x1906
#endif
#ifndef GL_RGB
#define GL_RGB                            0x1907
#endif
#ifndef GL_RGBA
#define GL_RGBA                           0x1908
#endif
#ifndef GL_LUMINANCE
#define GL_LUMINANCE                      0x1909
#endif
#ifndef GL_LUMINANCE_ALPHA
#define GL_LUMINANCE_ALPHA                0x190A
#endif
#ifndef GL_BITMAP
#define GL_BITMAP                         0x1A00
#endif
#ifndef GL_POINT
#define GL_POINT                          0x1B00
#endif
#ifndef GL_LINE
#define GL_LINE                           0x1B01
#endif
#ifndef GL_FILL
#define GL_FILL                           0x1B02
#endif
#ifndef GL_RENDER
#define GL_RENDER                         0x1C00
#endif
#ifndef GL_FEEDBACK
#define GL_FEEDBACK                       0x1C01
#endif
#ifndef GL_SELECT
#define GL_SELECT                         0x1C02
#endif
#ifndef GL_FLAT
#define GL_FLAT                           0x1D00
#endif
#ifndef GL_SMOOTH
#define GL_SMOOTH                         0x1D01
#endif
#ifndef GL_KEEP
#define GL_KEEP                           0x1E00
#endif
#ifndef GL_REPLACE
#define GL_REPLACE                        0x1E01
#endif
#ifndef GL_INCR
#define GL_INCR                           0x1E02
#endif
#ifndef GL_DECR
#define GL_DECR                           0x1E03
#endif
#ifndef GL_VENDOR
#define GL_VENDOR                         0x1F00
#endif
#ifndef GL_RENDERER
#define GL_RENDERER                       0x1F01
#endif
#ifndef GL_VERSION
#define GL_VERSION                        0x1F02
#endif
#ifndef GL_EXTENSIONS
#define GL_EXTENSIONS                     0x1F03
#endif
#ifndef GL_S
#define GL_S                              0x2000
#endif
#ifndef GL_T
#define GL_T                              0x2001
#endif
#ifndef GL_R
#define GL_R                              0x2002
#endif
#ifndef GL_Q
#define GL_Q                              0x2003
#endif
#ifndef GL_MODULATE
#define GL_MODULATE                       0x2100
#endif
#ifndef GL_DECAL
#define GL_DECAL                          0x2101
#endif
#ifndef GL_TEXTURE_ENV_MODE
#define GL_TEXTURE_ENV_MODE               0x2200
#endif
#ifndef GL_TEXTURE_ENV_COLOR
#define GL_TEXTURE_ENV_COLOR              0x2201
#endif
#ifndef GL_TEXTURE_ENV
#define GL_TEXTURE_ENV                    0x2300
#endif
#ifndef GL_EYE_LINEAR
#define GL_EYE_LINEAR                     0x2400
#endif
#ifndef GL_OBJECT_LINEAR
#define GL_OBJECT_LINEAR                  0x2401
#endif
#ifndef GL_SPHERE_MAP
#define GL_SPHERE_MAP                     0x2402
#endif
#ifndef GL_TEXTURE_GEN_MODE
#define GL_TEXTURE_GEN_MODE               0x2500
#endif
#ifndef GL_OBJECT_PLANE
#define GL_OBJECT_PLANE                   0x2501
#endif
#ifndef GL_EYE_PLANE
#define GL_EYE_PLANE                      0x2502
#endif
#ifndef GL_NEAREST
#define GL_NEAREST                        0x2600
#endif
#ifndef GL_LINEAR
#define GL_LINEAR                         0x2601
#endif
#ifndef GL_NEAREST_MIPMAP_NEAREST
#define GL_NEAREST_MIPMAP_NEAREST         0x2700
#endif
#ifndef GL_LINEAR_MIPMAP_NEAREST
#define GL_LINEAR_MIPMAP_NEAREST          0x2701
#endif
#ifndef GL_NEAREST_MIPMAP_LINEAR
#define GL_NEAREST_MIPMAP_LINEAR          0x2702
#endif
#ifndef GL_LINEAR_MIPMAP_LINEAR
#define GL_LINEAR_MIPMAP_LINEAR           0x2703
#endif
#ifndef GL_TEXTURE_MAG_FILTER
#define GL_TEXTURE_MAG_FILTER             0x2800
#endif
#ifndef GL_TEXTURE_MIN_FILTER
#define GL_TEXTURE_MIN_FILTER             0x2801
#endif
#ifndef GL_TEXTURE_WRAP_S
#define GL_TEXTURE_WRAP_S                 0x2802
#endif
#ifndef GL_TEXTURE_WRAP_T
#define GL_TEXTURE_WRAP_T                 0x2803
#endif
#ifndef GL_CLAMP
#define GL_CLAMP                          0x2900
#endif
#ifndef GL_REPEAT
#define GL_REPEAT                         0x2901
#endif
#ifndef GL_CLIENT_PIXEL_STORE_BIT
#define GL_CLIENT_PIXEL_STORE_BIT         0x00000001
#endif
#ifndef GL_CLIENT_VERTEX_ARRAY_BIT
#define GL_CLIENT_VERTEX_ARRAY_BIT        0x00000002
#endif
#ifndef GL_CLIENT_ALL_ATTRIB_BITS
#define GL_CLIENT_ALL_ATTRIB_BITS         0xffffffff
#endif
#ifndef GL_POLYGON_OFFSET_FACTOR
#define GL_POLYGON_OFFSET_FACTOR          0x8038
#endif
#ifndef GL_POLYGON_OFFSET_UNITS
#define GL_POLYGON_OFFSET_UNITS           0x2A00
#endif
#ifndef GL_POLYGON_OFFSET_POINT
#define GL_POLYGON_OFFSET_POINT           0x2A01
#endif
#ifndef GL_POLYGON_OFFSET_LINE
#define GL_POLYGON_OFFSET_LINE            0x2A02
#endif
#ifndef GL_POLYGON_OFFSET_FILL
#define GL_POLYGON_OFFSET_FILL            0x8037
#endif
#ifndef GL_ALPHA4
#define GL_ALPHA4                         0x803B
#endif
#ifndef GL_ALPHA8
#define GL_ALPHA8                         0x803C
#endif
#ifndef GL_ALPHA12
#define GL_ALPHA12                        0x803D
#endif
#ifndef GL_ALPHA16
#define GL_ALPHA16                        0x803E
#endif
#ifndef GL_LUMINANCE4
#define GL_LUMINANCE4                     0x803F
#endif
#ifndef GL_LUMINANCE8
#define GL_LUMINANCE8                     0x8040
#endif
#ifndef GL_LUMINANCE12
#define GL_LUMINANCE12                    0x8041
#endif
#ifndef GL_LUMINANCE16
#define GL_LUMINANCE16                    0x8042
#endif
#ifndef GL_LUMINANCE4_ALPHA4
#define GL_LUMINANCE4_ALPHA4              0x8043
#endif
#ifndef GL_LUMINANCE6_ALPHA2
#define GL_LUMINANCE6_ALPHA2              0x8044
#endif
#ifndef GL_LUMINANCE8_ALPHA8
#define GL_LUMINANCE8_ALPHA8              0x8045
#endif
#ifndef GL_LUMINANCE12_ALPHA4
#define GL_LUMINANCE12_ALPHA4             0x8046
#endif
#ifndef GL_LUMINANCE12_ALPHA12
#define GL_LUMINANCE12_ALPHA12            0x8047
#endif
#ifndef GL_LUMINANCE16_ALPHA16
#define GL_LUMINANCE16_ALPHA16            0x8048
#endif
#ifndef GL_INTENSITY
#define GL_INTENSITY                      0x8049
#endif
#ifndef GL_INTENSITY4
#define GL_INTENSITY4                     0x804A
#endif
#ifndef GL_INTENSITY8
#define GL_INTENSITY8                     0x804B
#endif
#ifndef GL_INTENSITY12
#define GL_INTENSITY12                    0x804C
#endif
#ifndef GL_INTENSITY16
#define GL_INTENSITY16                    0x804D
#endif
#ifndef GL_R3_G3_B2
#define GL_R3_G3_B2                       0x2A10
#endif
#ifndef GL_RGB4
#define GL_RGB4                           0x804F
#endif
#ifndef GL_RGB5
#define GL_RGB5                           0x8050
#endif
#ifndef GL_RGB8
#define GL_RGB8                           0x8051
#endif
#ifndef GL_RGB10
#define GL_RGB10                          0x8052
#endif
#ifndef GL_RGB12
#define GL_RGB12                          0x8053
#endif
#ifndef GL_RGB16
#define GL_RGB16                          0x8054
#endif
#ifndef GL_RGBA2
#define GL_RGBA2                          0x8055
#endif
#ifndef GL_RGBA4
#define GL_RGBA4                          0x8056
#endif
#ifndef GL_RGB5_A1
#define GL_RGB5_A1                        0x8057
#endif
#ifndef GL_RGBA8
#define GL_RGBA8                          0x8058
#endif
#ifndef GL_RGB10_A2
#define GL_RGB10_A2                       0x8059
#endif
#ifndef GL_RGBA12
#define GL_RGBA12                         0x805A
#endif
#ifndef GL_RGBA16
#define GL_RGBA16                         0x805B
#endif
#ifndef GL_TEXTURE_RED_SIZE
#define GL_TEXTURE_RED_SIZE               0x805C
#endif
#ifndef GL_TEXTURE_GREEN_SIZE
#define GL_TEXTURE_GREEN_SIZE             0x805D
#endif
#ifndef GL_TEXTURE_BLUE_SIZE
#define GL_TEXTURE_BLUE_SIZE              0x805E
#endif
#ifndef GL_TEXTURE_ALPHA_SIZE
#define GL_TEXTURE_ALPHA_SIZE             0x805F
#endif
#ifndef GL_TEXTURE_LUMINANCE_SIZE
#define GL_TEXTURE_LUMINANCE_SIZE         0x8060
#endif
#ifndef GL_TEXTURE_INTENSITY_SIZE
#define GL_TEXTURE_INTENSITY_SIZE         0x8061
#endif
#ifndef GL_PROXY_TEXTURE_1D
#define GL_PROXY_TEXTURE_1D               0x8063
#endif
#ifndef GL_PROXY_TEXTURE_2D
#define GL_PROXY_TEXTURE_2D               0x8064
#endif
#ifndef GL_TEXTURE_PRIORITY
#define GL_TEXTURE_PRIORITY               0x8066
#endif
#ifndef GL_TEXTURE_RESIDENT
#define GL_TEXTURE_RESIDENT               0x8067
#endif
#ifndef GL_TEXTURE_BINDING_1D
#define GL_TEXTURE_BINDING_1D             0x8068
#endif
#ifndef GL_TEXTURE_BINDING_2D
#define GL_TEXTURE_BINDING_2D             0x8069
#endif
#ifndef GL_TEXTURE_BINDING_3D
#define GL_TEXTURE_BINDING_3D             0x806A
#endif
#ifndef GL_VERTEX_ARRAY
#define GL_VERTEX_ARRAY                   0x8074
#endif
#ifndef GL_NORMAL_ARRAY
#define GL_NORMAL_ARRAY                   0x8075
#endif
#ifndef GL_COLOR_ARRAY
#define GL_COLOR_ARRAY                    0x8076
#endif
#ifndef GL_INDEX_ARRAY
#define GL_INDEX_ARRAY                    0x8077
#endif
#ifndef GL_TEXTURE_COORD_ARRAY
#define GL_TEXTURE_COORD_ARRAY            0x8078
#endif
#ifndef GL_EDGE_FLAG_ARRAY
#define GL_EDGE_FLAG_ARRAY                0x8079
#endif
#ifndef GL_VERTEX_ARRAY_SIZE
#define GL_VERTEX_ARRAY_SIZE              0x807A
#endif
#ifndef GL_VERTEX_ARRAY_TYPE
#define GL_VERTEX_ARRAY_TYPE              0x807B
#endif
#ifndef GL_VERTEX_ARRAY_STRIDE
#define GL_VERTEX_ARRAY_STRIDE            0x807C
#endif
#ifndef GL_NORMAL_ARRAY_TYPE
#define GL_NORMAL_ARRAY_TYPE              0x807E
#endif
#ifndef GL_NORMAL_ARRAY_STRIDE
#define GL_NORMAL_ARRAY_STRIDE            0x807F
#endif
#ifndef GL_COLOR_ARRAY_SIZE
#define GL_COLOR_ARRAY_SIZE               0x8081
#endif
#ifndef GL_COLOR_ARRAY_TYPE
#define GL_COLOR_ARRAY_TYPE               0x8082
#endif
#ifndef GL_COLOR_ARRAY_STRIDE
#define GL_COLOR_ARRAY_STRIDE             0x8083
#endif
#ifndef GL_INDEX_ARRAY_TYPE
#define GL_INDEX_ARRAY_TYPE               0x8085
#endif
#ifndef GL_INDEX_ARRAY_STRIDE
#define GL_INDEX_ARRAY_STRIDE             0x8086
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_SIZE
#define GL_TEXTURE_COORD_ARRAY_SIZE       0x8088
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_TYPE
#define GL_TEXTURE_COORD_ARRAY_TYPE       0x8089
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_STRIDE
#define GL_TEXTURE_COORD_ARRAY_STRIDE     0x808A
#endif
#ifndef GL_EDGE_FLAG_ARRAY_STRIDE
#define GL_EDGE_FLAG_ARRAY_STRIDE         0x808C
#endif
#ifndef GL_VERTEX_ARRAY_POINTER
#define GL_VERTEX_ARRAY_POINTER           0x808E
#endif
#ifndef GL_NORMAL_ARRAY_POINTER
#define GL_NORMAL_ARRAY_POINTER           0x808F
#endif
#ifndef GL_COLOR_ARRAY_POINTER
#define GL_COLOR_ARRAY_POINTER            0x8090
#endif
#ifndef GL_INDEX_ARRAY_POINTER
#define GL_INDEX_ARRAY_POINTER            0x8091
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_POINTER
#define GL_TEXTURE_COORD_ARRAY_POINTER    0x8092
#endif
#ifndef GL_EDGE_FLAG_ARRAY_POINTER
#define GL_EDGE_FLAG_ARRAY_POINTER        0x8093
#endif
#ifndef GL_V2F
#define GL_V2F                            0x2A20
#endif
#ifndef GL_V3F
#define GL_V3F                            0x2A21
#endif
#ifndef GL_C4UB_V2F
#define GL_C4UB_V2F                       0x2A22
#endif
#ifndef GL_C4UB_V3F
#define GL_C4UB_V3F                       0x2A23
#endif
#ifndef GL_C3F_V3F
#define GL_C3F_V3F                        0x2A24
#endif
#ifndef GL_N3F_V3F
#define GL_N3F_V3F                        0x2A25
#endif
#ifndef GL_C4F_N3F_V3F
#define GL_C4F_N3F_V3F                    0x2A26
#endif
#ifndef GL_T2F_V3F
#define GL_T2F_V3F                        0x2A27
#endif
#ifndef GL_T4F_V4F
#define GL_T4F_V4F                        0x2A28
#endif
#ifndef GL_T2F_C4UB_V3F
#define GL_T2F_C4UB_V3F                   0x2A29
#endif
#ifndef GL_T2F_C3F_V3F
#define GL_T2F_C3F_V3F                    0x2A2A
#endif
#ifndef GL_T2F_N3F_V3F
#define GL_T2F_N3F_V3F                    0x2A2B
#endif
#ifndef GL_T2F_C4F_N3F_V3F
#define GL_T2F_C4F_N3F_V3F                0x2A2C
#endif
#ifndef GL_T4F_C4F_N3F_V4F
#define GL_T4F_C4F_N3F_V4F                0x2A2D
#endif
#ifndef GL_BGR
#define GL_BGR                            0x80E0
#endif
#ifndef GL_BGRA
#define GL_BGRA                           0x80E1
#endif
#ifndef GL_CONSTANT_COLOR
#define GL_CONSTANT_COLOR                 0x8001
#endif
#ifndef GL_ONE_MINUS_CONSTANT_COLOR
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#endif
#ifndef GL_CONSTANT_ALPHA
#define GL_CONSTANT_ALPHA                 0x8003
#endif
#ifndef GL_ONE_MINUS_CONSTANT_ALPHA
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
#endif
#ifndef GL_BLEND_COLOR
#define GL_BLEND_COLOR                    0x8005
#endif
#ifndef GL_FUNC_ADD
#define GL_FUNC_ADD                       0x8006
#endif
#ifndef GL_MIN
#define GL_MIN                            0x8007
#endif
#ifndef GL_MAX
#define GL_MAX                            0x8008
#endif
#ifndef GL_BLEND_EQUATION
#define GL_BLEND_EQUATION                 0x8009
#endif
#ifndef GL_FUNC_SUBTRACT
#define GL_FUNC_SUBTRACT                  0x800A
#endif
#ifndef GL_FUNC_REVERSE_SUBTRACT
#define GL_FUNC_REVERSE_SUBTRACT          0x800B
#endif
#ifndef GL_COLOR_MATRIX
#define GL_COLOR_MATRIX                   0x80B1
#endif
#ifndef GL_COLOR_MATRIX_STACK_DEPTH
#define GL_COLOR_MATRIX_STACK_DEPTH       0x80B2
#endif
#ifndef GL_MAX_COLOR_MATRIX_STACK_DEPTH
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH   0x80B3
#endif
#ifndef GL_POST_COLOR_MATRIX_RED_SCALE
#define GL_POST_COLOR_MATRIX_RED_SCALE    0x80B4
#endif
#ifndef GL_POST_COLOR_MATRIX_GREEN_SCALE
#define GL_POST_COLOR_MATRIX_GREEN_SCALE  0x80B5
#endif
#ifndef GL_POST_COLOR_MATRIX_BLUE_SCALE
#define GL_POST_COLOR_MATRIX_BLUE_SCALE   0x80B6
#endif
#ifndef GL_POST_COLOR_MATRIX_ALPHA_SCALE
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE  0x80B7
#endif
#ifndef GL_POST_COLOR_MATRIX_RED_BIAS
#define GL_POST_COLOR_MATRIX_RED_BIAS     0x80B8
#endif
#ifndef GL_POST_COLOR_MATRIX_GREEN_BIAS
#define GL_POST_COLOR_MATRIX_GREEN_BIAS   0x80B9
#endif
#ifndef GL_POST_COLOR_MATRIX_BLUE_BIAS
#define GL_POST_COLOR_MATRIX_BLUE_BIAS    0x80BA
#endif
#ifndef GL_POST_COLOR_MATRIX_ALPHA_BIAS
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS   0x80BB
#endif
#ifndef GL_COLOR_TABLE
#define GL_COLOR_TABLE                    0x80D0
#endif
#ifndef GL_POST_CONVOLUTION_COLOR_TABLE
#define GL_POST_CONVOLUTION_COLOR_TABLE   0x80D1
#endif
#ifndef GL_POST_COLOR_MATRIX_COLOR_TABLE
#define GL_POST_COLOR_MATRIX_COLOR_TABLE  0x80D2
#endif
#ifndef GL_PROXY_COLOR_TABLE
#define GL_PROXY_COLOR_TABLE              0x80D3
#endif
#ifndef GL_PROXY_POST_CONVOLUTION_COLOR_TABLE
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE 0x80D4
#endif
#ifndef GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE 0x80D5
#endif
#ifndef GL_COLOR_TABLE_SCALE
#define GL_COLOR_TABLE_SCALE              0x80D6
#endif
#ifndef GL_COLOR_TABLE_BIAS
#define GL_COLOR_TABLE_BIAS               0x80D7
#endif
#ifndef GL_COLOR_TABLE_FORMAT
#define GL_COLOR_TABLE_FORMAT             0x80D8
#endif
#ifndef GL_COLOR_TABLE_WIDTH
#define GL_COLOR_TABLE_WIDTH              0x80D9
#endif
#ifndef GL_COLOR_TABLE_RED_SIZE
#define GL_COLOR_TABLE_RED_SIZE           0x80DA
#endif
#ifndef GL_COLOR_TABLE_GREEN_SIZE
#define GL_COLOR_TABLE_GREEN_SIZE         0x80DB
#endif
#ifndef GL_COLOR_TABLE_BLUE_SIZE
#define GL_COLOR_TABLE_BLUE_SIZE          0x80DC
#endif
#ifndef GL_COLOR_TABLE_ALPHA_SIZE
#define GL_COLOR_TABLE_ALPHA_SIZE         0x80DD
#endif
#ifndef GL_COLOR_TABLE_LUMINANCE_SIZE
#define GL_COLOR_TABLE_LUMINANCE_SIZE     0x80DE
#endif
#ifndef GL_COLOR_TABLE_INTENSITY_SIZE
#define GL_COLOR_TABLE_INTENSITY_SIZE     0x80DF
#endif
#ifndef GL_CONVOLUTION_1D
#define GL_CONVOLUTION_1D                 0x8010
#endif
#ifndef GL_CONVOLUTION_2D
#define GL_CONVOLUTION_2D                 0x8011
#endif
#ifndef GL_SEPARABLE_2D
#define GL_SEPARABLE_2D                   0x8012
#endif
#ifndef GL_CONVOLUTION_BORDER_MODE
#define GL_CONVOLUTION_BORDER_MODE        0x8013
#endif
#ifndef GL_CONVOLUTION_FILTER_SCALE
#define GL_CONVOLUTION_FILTER_SCALE       0x8014
#endif
#ifndef GL_CONVOLUTION_FILTER_BIAS
#define GL_CONVOLUTION_FILTER_BIAS        0x8015
#endif
#ifndef GL_REDUCE
#define GL_REDUCE                         0x8016
#endif
#ifndef GL_CONVOLUTION_FORMAT
#define GL_CONVOLUTION_FORMAT             0x8017
#endif
#ifndef GL_CONVOLUTION_WIDTH
#define GL_CONVOLUTION_WIDTH              0x8018
#endif
#ifndef GL_CONVOLUTION_HEIGHT
#define GL_CONVOLUTION_HEIGHT             0x8019
#endif
#ifndef GL_MAX_CONVOLUTION_WIDTH
#define GL_MAX_CONVOLUTION_WIDTH          0x801A
#endif
#ifndef GL_MAX_CONVOLUTION_HEIGHT
#define GL_MAX_CONVOLUTION_HEIGHT         0x801B
#endif
#ifndef GL_POST_CONVOLUTION_RED_SCALE
#define GL_POST_CONVOLUTION_RED_SCALE     0x801C
#endif
#ifndef GL_POST_CONVOLUTION_GREEN_SCALE
#define GL_POST_CONVOLUTION_GREEN_SCALE   0x801D
#endif
#ifndef GL_POST_CONVOLUTION_BLUE_SCALE
#define GL_POST_CONVOLUTION_BLUE_SCALE    0x801E
#endif
#ifndef GL_POST_CONVOLUTION_ALPHA_SCALE
#define GL_POST_CONVOLUTION_ALPHA_SCALE   0x801F
#endif
#ifndef GL_POST_CONVOLUTION_RED_BIAS
#define GL_POST_CONVOLUTION_RED_BIAS      0x8020
#endif
#ifndef GL_POST_CONVOLUTION_GREEN_BIAS
#define GL_POST_CONVOLUTION_GREEN_BIAS    0x8021
#endif
#ifndef GL_POST_CONVOLUTION_BLUE_BIAS
#define GL_POST_CONVOLUTION_BLUE_BIAS     0x8022
#endif
#ifndef GL_POST_CONVOLUTION_ALPHA_BIAS
#define GL_POST_CONVOLUTION_ALPHA_BIAS    0x8023
#endif
#ifndef GL_CONSTANT_BORDER
#define GL_CONSTANT_BORDER                0x8151
#endif
#ifndef GL_REPLICATE_BORDER
#define GL_REPLICATE_BORDER               0x8153
#endif
#ifndef GL_CONVOLUTION_BORDER_COLOR
#define GL_CONVOLUTION_BORDER_COLOR       0x8154
#endif
#ifndef GL_MAX_ELEMENTS_VERTICES
#define GL_MAX_ELEMENTS_VERTICES          0x80E8
#endif
#ifndef GL_MAX_ELEMENTS_INDICES
#define GL_MAX_ELEMENTS_INDICES           0x80E9
#endif
#ifndef GL_HISTOGRAM
#define GL_HISTOGRAM                      0x8024
#endif
#ifndef GL_PROXY_HISTOGRAM
#define GL_PROXY_HISTOGRAM                0x8025
#endif
#ifndef GL_HISTOGRAM_WIDTH
#define GL_HISTOGRAM_WIDTH                0x8026
#endif
#ifndef GL_HISTOGRAM_FORMAT
#define GL_HISTOGRAM_FORMAT               0x8027
#endif
#ifndef GL_HISTOGRAM_RED_SIZE
#define GL_HISTOGRAM_RED_SIZE             0x8028
#endif
#ifndef GL_HISTOGRAM_GREEN_SIZE
#define GL_HISTOGRAM_GREEN_SIZE           0x8029
#endif
#ifndef GL_HISTOGRAM_BLUE_SIZE
#define GL_HISTOGRAM_BLUE_SIZE            0x802A
#endif
#ifndef GL_HISTOGRAM_ALPHA_SIZE
#define GL_HISTOGRAM_ALPHA_SIZE           0x802B
#endif
#ifndef GL_HISTOGRAM_LUMINANCE_SIZE
#define GL_HISTOGRAM_LUMINANCE_SIZE       0x802C
#endif
#ifndef GL_HISTOGRAM_SINK
#define GL_HISTOGRAM_SINK                 0x802D
#endif
#ifndef GL_MINMAX
#define GL_MINMAX                         0x802E
#endif
#ifndef GL_MINMAX_FORMAT
#define GL_MINMAX_FORMAT                  0x802F
#endif
#ifndef GL_MINMAX_SINK
#define GL_MINMAX_SINK                    0x8030
#endif
#ifndef GL_TABLE_TOO_LARGE
#define GL_TABLE_TOO_LARGE                0x8031
#endif
#ifndef GL_UNSIGNED_BYTE_3_3_2
#define GL_UNSIGNED_BYTE_3_3_2            0x8032
#endif
#ifndef GL_UNSIGNED_SHORT_4_4_4_4
#define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
#endif
#ifndef GL_UNSIGNED_SHORT_5_5_5_1
#define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
#endif
#ifndef GL_UNSIGNED_INT_8_8_8_8
#define GL_UNSIGNED_INT_8_8_8_8           0x8035
#endif
#ifndef GL_UNSIGNED_INT_10_10_10_2
#define GL_UNSIGNED_INT_10_10_10_2        0x8036
#endif
#ifndef GL_UNSIGNED_BYTE_2_3_3_REV
#define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
#endif
#ifndef GL_UNSIGNED_SHORT_5_6_5
#define GL_UNSIGNED_SHORT_5_6_5           0x8363
#endif
#ifndef GL_UNSIGNED_SHORT_5_6_5_REV
#define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
#endif
#ifndef GL_UNSIGNED_SHORT_4_4_4_4_REV
#define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
#endif
#ifndef GL_UNSIGNED_SHORT_1_5_5_5_REV
#define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
#endif
#ifndef GL_UNSIGNED_INT_8_8_8_8_REV
#define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
#endif
#ifndef GL_UNSIGNED_INT_2_10_10_10_REV
#define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
#endif
#ifndef GL_RESCALE_NORMAL
#define GL_RESCALE_NORMAL                 0x803A
#endif
#ifndef GL_LIGHT_MODEL_COLOR_CONTROL
#define GL_LIGHT_MODEL_COLOR_CONTROL      0x81F8
#endif
#ifndef GL_SINGLE_COLOR
#define GL_SINGLE_COLOR                   0x81F9
#endif
#ifndef GL_SEPARATE_SPECULAR_COLOR
#define GL_SEPARATE_SPECULAR_COLOR        0x81FA
#endif
#ifndef GL_PACK_SKIP_IMAGES
#define GL_PACK_SKIP_IMAGES               0x806B
#endif
#ifndef GL_PACK_IMAGE_HEIGHT
#define GL_PACK_IMAGE_HEIGHT              0x806C
#endif
#ifndef GL_UNPACK_SKIP_IMAGES
#define GL_UNPACK_SKIP_IMAGES             0x806D
#endif
#ifndef GL_UNPACK_IMAGE_HEIGHT
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#endif
#ifndef GL_TEXTURE_3D
#define GL_TEXTURE_3D                     0x806F
#endif
#ifndef GL_PROXY_TEXTURE_3D
#define GL_PROXY_TEXTURE_3D               0x8070
#endif
#ifndef GL_TEXTURE_DEPTH
#define GL_TEXTURE_DEPTH                  0x8071
#endif
#ifndef GL_TEXTURE_WRAP_R
#define GL_TEXTURE_WRAP_R                 0x8072
#endif
#ifndef GL_MAX_3D_TEXTURE_SIZE
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#endif
#ifndef GL_CLAMP_TO_EDGE
#define GL_CLAMP_TO_EDGE                  0x812F
#endif
#ifndef GL_TEXTURE_MIN_LOD
#define GL_TEXTURE_MIN_LOD                0x813A
#endif
#ifndef GL_TEXTURE_MAX_LOD
#define GL_TEXTURE_MAX_LOD                0x813B
#endif
#ifndef GL_TEXTURE_BASE_LEVEL
#define GL_TEXTURE_BASE_LEVEL             0x813C
#endif
#ifndef GL_TEXTURE_MAX_LEVEL
#define GL_TEXTURE_MAX_LEVEL              0x813D
#endif
#ifndef GL_SMOOTH_POINT_SIZE_RANGE
#define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
#endif
#ifndef GL_SMOOTH_POINT_SIZE_GRANULARITY
#define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
#endif
#ifndef GL_SMOOTH_LINE_WIDTH_RANGE
#define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
#endif
#ifndef GL_SMOOTH_LINE_WIDTH_GRANULARITY
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
#endif
#ifndef GL_ALIASED_POINT_SIZE_RANGE
#define GL_ALIASED_POINT_SIZE_RANGE       0x846D
#endif
#ifndef GL_ALIASED_LINE_WIDTH_RANGE
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E
#endif
#ifndef GL_TEXTURE0_ARB
#define GL_TEXTURE0_ARB                   0x84C0
#endif
#ifndef GL_TEXTURE1_ARB
#define GL_TEXTURE1_ARB                   0x84C1
#endif
#ifndef GL_TEXTURE2_ARB
#define GL_TEXTURE2_ARB                   0x84C2
#endif
#ifndef GL_TEXTURE3_ARB
#define GL_TEXTURE3_ARB                   0x84C3
#endif
#ifndef GL_TEXTURE4_ARB
#define GL_TEXTURE4_ARB                   0x84C4
#endif
#ifndef GL_TEXTURE5_ARB
#define GL_TEXTURE5_ARB                   0x84C5
#endif
#ifndef GL_TEXTURE6_ARB
#define GL_TEXTURE6_ARB                   0x84C6
#endif
#ifndef GL_TEXTURE7_ARB
#define GL_TEXTURE7_ARB                   0x84C7
#endif
#ifndef GL_TEXTURE8_ARB
#define GL_TEXTURE8_ARB                   0x84C8
#endif
#ifndef GL_TEXTURE9_ARB
#define GL_TEXTURE9_ARB                   0x84C9
#endif
#ifndef GL_TEXTURE10_ARB
#define GL_TEXTURE10_ARB                  0x84CA
#endif
#ifndef GL_TEXTURE11_ARB
#define GL_TEXTURE11_ARB                  0x84CB
#endif
#ifndef GL_TEXTURE12_ARB
#define GL_TEXTURE12_ARB                  0x84CC
#endif
#ifndef GL_TEXTURE13_ARB
#define GL_TEXTURE13_ARB                  0x84CD
#endif
#ifndef GL_TEXTURE14_ARB
#define GL_TEXTURE14_ARB                  0x84CE
#endif
#ifndef GL_TEXTURE15_ARB
#define GL_TEXTURE15_ARB                  0x84CF
#endif
#ifndef GL_TEXTURE16_ARB
#define GL_TEXTURE16_ARB                  0x84D0
#endif
#ifndef GL_TEXTURE17_ARB
#define GL_TEXTURE17_ARB                  0x84D1
#endif
#ifndef GL_TEXTURE18_ARB
#define GL_TEXTURE18_ARB                  0x84D2
#endif
#ifndef GL_TEXTURE19_ARB
#define GL_TEXTURE19_ARB                  0x84D3
#endif
#ifndef GL_TEXTURE20_ARB
#define GL_TEXTURE20_ARB                  0x84D4
#endif
#ifndef GL_TEXTURE21_ARB
#define GL_TEXTURE21_ARB                  0x84D5
#endif
#ifndef GL_TEXTURE22_ARB
#define GL_TEXTURE22_ARB                  0x84D6
#endif
#ifndef GL_TEXTURE23_ARB
#define GL_TEXTURE23_ARB                  0x84D7
#endif
#ifndef GL_TEXTURE24_ARB
#define GL_TEXTURE24_ARB                  0x84D8
#endif
#ifndef GL_TEXTURE25_ARB
#define GL_TEXTURE25_ARB                  0x84D9
#endif
#ifndef GL_TEXTURE26_ARB
#define GL_TEXTURE26_ARB                  0x84DA
#endif
#ifndef GL_TEXTURE27_ARB
#define GL_TEXTURE27_ARB                  0x84DB
#endif
#ifndef GL_TEXTURE28_ARB
#define GL_TEXTURE28_ARB                  0x84DC
#endif
#ifndef GL_TEXTURE29_ARB
#define GL_TEXTURE29_ARB                  0x84DD
#endif
#ifndef GL_TEXTURE30_ARB
#define GL_TEXTURE30_ARB                  0x84DE
#endif
#ifndef GL_TEXTURE31_ARB
#define GL_TEXTURE31_ARB                  0x84DF
#endif
#ifndef GL_ACTIVE_TEXTURE_ARB
#define GL_ACTIVE_TEXTURE_ARB             0x84E0
#endif
#ifndef GL_CLIENT_ACTIVE_TEXTURE_ARB
#define GL_CLIENT_ACTIVE_TEXTURE_ARB      0x84E1
#endif
#ifndef GL_MAX_TEXTURE_UNITS_ARB
#define GL_MAX_TEXTURE_UNITS_ARB          0x84E2
#endif
#ifndef GL_LOGIC_OP
#define GL_LOGIC_OP GL_INDEX_LOGIC_OP
#endif
#ifndef GL_TEXTURE_COMPONENTS
#define GL_TEXTURE_COMPONENTS GL_TEXTURE_INTERNAL_FORMAT
#endif

// Additional defines from glext.h

#ifndef GL_BITMAP
#define GL_BITMAP                         0x1A00
#endif
#ifndef GL_ALPHA_INTEGER
#define GL_ALPHA_INTEGER                  0x8D97
#endif
#ifndef GL_CONSTANT
#define GL_CONSTANT                       0x8576
#endif
#ifndef GL_COPY_READ_BUFFER_BINDING
#define GL_COPY_READ_BUFFER_BINDING       0x8F36
#endif
#ifndef GL_COPY_WRITE_BUFFER_BINDING
#define GL_COPY_WRITE_BUFFER_BINDING      0x8F37
#endif
#ifndef GL_COMPRESSED_LUMINANCE
#define GL_COMPRESSED_LUMINANCE           0x84EA
#endif
#ifndef GL_COMPRESSED_LUMINANCE_ALPHA
#define GL_COMPRESSED_LUMINANCE_ALPHA     0x84EB
#endif
#ifndef GL_COMPRESSED_SLUMINANCE
#define GL_COMPRESSED_SLUMINANCE          0x8C4A
#endif
#ifndef GL_COMPRESSED_SLUMINANCE_ALPHA
#define GL_COMPRESSED_SLUMINANCE_ALPHA    0x8C4B
#endif
#ifndef GL_SLUMINANCE
#define GL_SLUMINANCE                     0x8C46
#endif
#ifndef GL_SLUMINANCE8
#define GL_SLUMINANCE8                    0x8C47
#endif
#ifndef GL_SLUMINANCE_ALPHA
#define GL_SLUMINANCE_ALPHA               0x8C44
#endif
#ifndef GL_SLUMINANCE8_ALPHA8
#define GL_SLUMINANCE8_ALPHA8             0x8C45
#endif
#ifndef GL_GENERATE_MIPMAP
#define GL_GENERATE_MIPMAP                0x8191
#endif
#ifndef GL_CLAMP
#define GL_CLAMP                          0x2900
#endif

// GL_ARB_gpu_shader_int64
#ifndef GL_INT64_ARB
#define GL_INT64_ARB                      0x140E
#endif
#ifndef GL_INT64_VEC2_ARB
#define GL_INT64_VEC2_ARB                 0x8FE9
#endif
#ifndef GL_INT64_VEC3_ARB
#define GL_INT64_VEC3_ARB                 0x8FEA
#endif
#ifndef GL_INT64_VEC4_ARB
#define GL_INT64_VEC4_ARB                 0x8FEB
#endif
#ifndef GL_UNSIGNED_INT64_ARB
#define GL_UNSIGNED_INT64_ARB             0x140F
#endif
#ifndef GL_UNSIGNED_INT64_VEC2_ARB
#define GL_UNSIGNED_INT64_VEC2_ARB        0x8FF5
#endif
#ifndef GL_UNSIGNED_INT64_VEC3_ARB
#define GL_UNSIGNED_INT64_VEC3_ARB        0x8FF6
#endif
#ifndef GL_UNSIGNED_INT64_VEC4_ARB
#define GL_UNSIGNED_INT64_VEC4_ARB        0x8FF7
#endif

// GL_ARB_shader_image_load_store
#ifndef GL_IMAGE_1D
#define GL_IMAGE_1D                       0x904C
#endif
#ifndef GL_IMAGE_2D
#define GL_IMAGE_2D                       0x904D
#endif
#ifndef GL_IMAGE_3D
#define GL_IMAGE_3D                       0x904E
#endif
#ifndef GL_IMAGE_2D_RECT
#define GL_IMAGE_2D_RECT                  0x904F
#endif
#ifndef GL_IMAGE_CUBE
#define GL_IMAGE_CUBE                     0x9050
#endif
#ifndef GL_IMAGE_BUFFER
#define GL_IMAGE_BUFFER                   0x9051
#endif
#ifndef GL_IMAGE_1D_ARRAY
#define GL_IMAGE_1D_ARRAY                 0x9052
#endif
#ifndef GL_IMAGE_2D_ARRAY
#define GL_IMAGE_2D_ARRAY                 0x9053
#endif
#ifndef GL_IMAGE_CUBE_MAP_ARRAY
#define GL_IMAGE_CUBE_MAP_ARRAY           0x9054
#endif
#ifndef GL_IMAGE_2D_MULTISAMPLE
#define GL_IMAGE_2D_MULTISAMPLE           0x9055
#endif
#ifndef GL_IMAGE_2D_MULTISAMPLE_ARRAY
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY     0x9056
#endif
#ifndef GL_INT_IMAGE_1D
#define GL_INT_IMAGE_1D                   0x9057
#endif
#ifndef GL_INT_IMAGE_2D
#define GL_INT_IMAGE_2D                   0x9058
#endif
#ifndef GL_INT_IMAGE_3D
#define GL_INT_IMAGE_3D                   0x9059
#endif
#ifndef GL_INT_IMAGE_2D_RECT
#define GL_INT_IMAGE_2D_RECT              0x905A
#endif
#ifndef GL_INT_IMAGE_CUBE
#define GL_INT_IMAGE_CUBE                 0x905B
#endif
#ifndef GL_INT_IMAGE_BUFFER
#define GL_INT_IMAGE_BUFFER               0x905C
#endif
#ifndef GL_INT_IMAGE_1D_ARRAY
#define GL_INT_IMAGE_1D_ARRAY             0x905D
#endif
#ifndef GL_INT_IMAGE_2D_ARRAY
#define GL_INT_IMAGE_2D_ARRAY             0x905E
#endif
#ifndef GL_INT_IMAGE_CUBE_MAP_ARRAY
#define GL_INT_IMAGE_CUBE_MAP_ARRAY       0x905F
#endif
#ifndef GL_INT_IMAGE_2D_MULTISAMPLE
#define GL_INT_IMAGE_2D_MULTISAMPLE       0x9060
#endif
#ifndef GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x9061
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_1D
#define GL_UNSIGNED_INT_IMAGE_1D          0x9062
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D
#define GL_UNSIGNED_INT_IMAGE_2D          0x9063
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_3D
#define GL_UNSIGNED_INT_IMAGE_3D          0x9064
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_RECT
#define GL_UNSIGNED_INT_IMAGE_2D_RECT     0x9065
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_CUBE
#define GL_UNSIGNED_INT_IMAGE_CUBE        0x9066
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_BUFFER
#define GL_UNSIGNED_INT_IMAGE_BUFFER      0x9067
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_1D_ARRAY
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY    0x9068
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_ARRAY
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY    0x9069
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY 0x906A
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE 0x906B
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x906C
#endif

// GL_ARB_gpu_shader5
#ifndef GL_GEOMETRY_SHADER_INVOCATIONS
#define GL_GEOMETRY_SHADER_INVOCATIONS    0x887F
#endif
#ifndef GL_MAX_GEOMETRY_SHADER_INVOCATIONS
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#endif

// More missing enums
#ifndef GL_FLOAT_MAT2x3
#define GL_FLOAT_MAT2x3                   0x8B65
#endif
#ifndef GL_FLOAT_MAT2x4
#define GL_FLOAT_MAT2x4                   0x8B66
#endif
#ifndef GL_FLOAT_MAT3x2
#define GL_FLOAT_MAT3x2                   0x8B67
#endif
#ifndef GL_FLOAT_MAT3x4
#define GL_FLOAT_MAT3x4                   0x8B68
#endif
#ifndef GL_FLOAT_MAT4x2
#define GL_FLOAT_MAT4x2                   0x8B69
#endif
#ifndef GL_FLOAT_MAT4x3
#define GL_FLOAT_MAT4x3                   0x8B6A
#endif
#ifndef GL_DOUBLE_VEC2
#define GL_DOUBLE_VEC2                    0x8FFC
#endif
#ifndef GL_DOUBLE_VEC3
#define GL_DOUBLE_VEC3                    0x8FFD
#endif
#ifndef GL_DOUBLE_VEC4
#define GL_DOUBLE_VEC4                    0x8FFE
#endif
#ifndef GL_DOUBLE_MAT2
#define GL_DOUBLE_MAT2                    0x8F46
#endif
#ifndef GL_DOUBLE_MAT3
#define GL_DOUBLE_MAT3                    0x8F47
#endif
#ifndef GL_DOUBLE_MAT4
#define GL_DOUBLE_MAT4                    0x8F48
#endif
#ifndef GL_DOUBLE_MAT2x3
#define GL_DOUBLE_MAT2x3                  0x8F49
#endif
#ifndef GL_DOUBLE_MAT2x4
#define GL_DOUBLE_MAT2x4                  0x8F4A
#endif
#ifndef GL_DOUBLE_MAT3x2
#define GL_DOUBLE_MAT3x2                  0x8F4B
#endif
#ifndef GL_DOUBLE_MAT3x4
#define GL_DOUBLE_MAT3x4                  0x8F4C
#endif
#ifndef GL_DOUBLE_MAT4x2
#define GL_DOUBLE_MAT4x2                  0x8F4D
#endif
#ifndef GL_DOUBLE_MAT4x3
#define GL_DOUBLE_MAT4x3                  0x8F4E
#endif

// Samplers
#ifndef GL_SAMPLER_1D_SHADOW
#define GL_SAMPLER_1D_SHADOW              0x8B61
#endif
#ifndef GL_SAMPLER_2D_SHADOW
#define GL_SAMPLER_2D_SHADOW              0x8B62
#endif
#ifndef GL_SAMPLER_2D_RECT
#define GL_SAMPLER_2D_RECT                0x8B63
#endif
#ifndef GL_SAMPLER_2D_RECT_SHADOW
#define GL_SAMPLER_2D_RECT_SHADOW         0x8B64
#endif
#ifndef GL_INT_SAMPLER_2D_RECT
#define GL_INT_SAMPLER_2D_RECT            0x8DCD
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_RECT
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT   0x8DD5
#endif
#ifndef GL_SAMPLER_BUFFER
#define GL_SAMPLER_BUFFER                 0x8DC2
#endif
#ifndef GL_INT_SAMPLER_BUFFER
#define GL_INT_SAMPLER_BUFFER             0x8DD0
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_BUFFER
#define GL_UNSIGNED_INT_SAMPLER_BUFFER    0x8DD8
#endif
#ifndef GL_SAMPLER_CUBE_SHADOW
#define GL_SAMPLER_CUBE_SHADOW            0x8DC5
#endif
#ifndef GL_SAMPLER_1D_ARRAY
#define GL_SAMPLER_1D_ARRAY               0x8DC0
#endif
#ifndef GL_SAMPLER_2D_ARRAY
#define GL_SAMPLER_2D_ARRAY               0x8DC1
#endif
#ifndef GL_SAMPLER_1D_ARRAY_SHADOW
#define GL_SAMPLER_1D_ARRAY_SHADOW        0x8DC3
#endif
#ifndef GL_SAMPLER_2D_ARRAY_SHADOW
#define GL_SAMPLER_2D_ARRAY_SHADOW        0x8DC4
#endif
#ifndef GL_INT_SAMPLER_1D
#define GL_INT_SAMPLER_1D                 0x8DC9
#endif
#ifndef GL_INT_SAMPLER_2D
#define GL_INT_SAMPLER_2D                 0x8DCA
#endif
#ifndef GL_INT_SAMPLER_3D
#define GL_INT_SAMPLER_3D                 0x8DCB
#endif
#ifndef GL_INT_SAMPLER_CUBE
#define GL_INT_SAMPLER_CUBE               0x8DCC
#endif
#ifndef GL_INT_SAMPLER_1D_ARRAY
#define GL_INT_SAMPLER_1D_ARRAY           0x8DCE
#endif
#ifndef GL_INT_SAMPLER_2D_ARRAY
#define GL_INT_SAMPLER_2D_ARRAY           0x8DCF
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_1D
#define GL_UNSIGNED_INT_SAMPLER_1D        0x8DD1
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D
#define GL_UNSIGNED_INT_SAMPLER_2D        0x8DD2
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_3D
#define GL_UNSIGNED_INT_SAMPLER_3D        0x8DD3
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_CUBE
#define GL_UNSIGNED_INT_SAMPLER_CUBE      0x8DD4
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_1D_ARRAY
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY  0x8DD6
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_ARRAY
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY  0x8DD7
#endif
#ifndef GL_SAMPLER_CUBE_MAP_ARRAY
#define GL_SAMPLER_CUBE_MAP_ARRAY         0x900C
#endif
#ifndef GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW  0x900D
#endif
#ifndef GL_INT_SAMPLER_CUBE_MAP_ARRAY
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY     0x900E
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
#endif
#ifndef GL_SAMPLER_2D_MULTISAMPLE
#define GL_SAMPLER_2D_MULTISAMPLE         0x9108
#endif
#ifndef GL_INT_SAMPLER_2D_MULTISAMPLE
#define GL_INT_SAMPLER_2D_MULTISAMPLE     0x9109
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#endif
#ifndef GL_SAMPLER_2D_MULTISAMPLE_ARRAY
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY   0x910B
#endif
#ifndef GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#endif

// GL 4.2+ enums (not in GL 4.1)
#ifndef GL_MAX_VERTEX_ATTRIB_STRIDE
#define GL_MAX_VERTEX_ATTRIB_STRIDE       0x82E5
#endif
#ifndef GL_NUM_SHADING_LANGUAGE_VERSIONS
#define GL_NUM_SHADING_LANGUAGE_VERSIONS  0x82E9
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_LONG
#define GL_VERTEX_ATTRIB_ARRAY_LONG       0x874E
#endif
#ifndef GL_VERTEX_BINDING_BUFFER
#define GL_VERTEX_BINDING_BUFFER          0x8F4F
#endif

// GL_ARB_texture_compression_bptc (GL 4.2)
#ifndef GL_COMPRESSED_RGBA_BPTC_UNORM
#define GL_COMPRESSED_RGBA_BPTC_UNORM     0x8E8C
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM 0x8E8D
#endif
#ifndef GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT 0x8E8E
#endif
#ifndef GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT 0x8E8F
#endif

// GL_KHR_debug aliases (map to ARB versions which GLAD provides)
#ifndef glDebugMessageControlKHR
#define glDebugMessageControlKHR glDebugMessageControl
#endif
#ifndef glDebugMessageInsertKHR
#define glDebugMessageInsertKHR glDebugMessageInsert
#endif
#ifndef glDebugMessageCallbackKHR
#define glDebugMessageCallbackKHR glDebugMessageCallback
#endif

// GL 4.5 robustness functions (not in GL 4.1)
#ifndef glGetnCompressedTexImage
#define glGetnCompressedTexImage(...) ((void)0)
#endif
#ifndef glGetnTexImage
#define glGetnTexImage(...) ((void)0)
#endif
#ifndef glGetnPixelMapfv
#define glGetnPixelMapfv(...) ((void)0)
#endif
#ifndef glGetnPixelMapuiv
#define glGetnPixelMapuiv(...) ((void)0)
#endif
#ifndef glGetnPixelMapusv
#define glGetnPixelMapusv(...) ((void)0)
#endif
#ifndef glGetnPolygonStipple
#define glGetnPolygonStipple(...) ((void)0)
#endif
#ifndef glGetnConvolutionFilter
#define glGetnConvolutionFilter(...) ((void)0)
#endif
#ifndef glGetnSeparableFilter
#define glGetnSeparableFilter(...) ((void)0)
#endif
#ifndef glGetnHistogram
#define glGetnHistogram(...) ((void)0)
#endif
#ifndef glGetnMinmax
#define glGetnMinmax(...) ((void)0)
#endif

// GL 4.6 functions (not in GL 4.1)
#ifndef glSpecializeShader
#define glSpecializeShader(...) ((void)0)
#endif
#ifndef glMultiDrawArraysIndirectCount
#define glMultiDrawArraysIndirectCount(...) ((void)0)
#endif
#ifndef glMultiDrawElementsIndirectCount
#define glMultiDrawElementsIndirectCount(...) ((void)0)
#endif

// OpenGL ES / fixed-point functions (not in desktop GL)
#ifndef glClipPlanef
#define glClipPlanef(...) ((void)0)
#endif
#ifndef glFrustumf
#define glFrustumf(...) ((void)0)
#endif
#ifndef glOrthof
#define glOrthof(...) ((void)0)
#endif
#ifndef glAlphaFuncx
#define glAlphaFuncx(...) ((void)0)
#endif
#ifndef glClearColorx
#define glClearColorx(...) ((void)0)
#endif
#ifndef glClearDepthx
#define glClearDepthx(...) ((void)0)
#endif
#ifndef glClipPlanex
#define glClipPlanex(...) ((void)0)
#endif
#ifndef glColor4x
#define glColor4x(...) ((void)0)
#endif
#ifndef glDepthRangex
#define glDepthRangex(...) ((void)0)
#endif
#ifndef glFogx
#define glFogx(...) ((void)0)
#endif
#ifndef glFogxv
#define glFogxv(...) ((void)0)
#endif
#ifndef glFrustumx
#define glFrustumx(...) ((void)0)
#endif
#ifndef glGetClipPlanef
#define glGetClipPlanef(...) ((void)0)
#endif
#ifndef glGetClipPlanex
#define glGetClipPlanex(...) ((void)0)
#endif
#ifndef glGetFixedv
#define glGetFixedv(...) ((void)0)
#endif
#ifndef glGetLightxv
#define glGetLightxv(...) ((void)0)
#endif
#ifndef glGetMaterialxv
#define glGetMaterialxv(...) ((void)0)
#endif
#ifndef glGetTexEnvxv
#define glGetTexEnvxv(...) ((void)0)
#endif
#ifndef glGetTexParameterxv
#define glGetTexParameterxv(...) ((void)0)
#endif
#ifndef glLightModelx
#define glLightModelx(...) ((void)0)
#endif
#ifndef glLightModelxv
#define glLightModelxv(...) ((void)0)
#endif
#ifndef glLightx
#define glLightx(...) ((void)0)
#endif
#ifndef glLightxv
#define glLightxv(...) ((void)0)
#endif
#ifndef glLineWidthx
#define glLineWidthx(...) ((void)0)
#endif
#ifndef glLoadMatrixx
#define glLoadMatrixx(...) ((void)0)
#endif
#ifndef glMaterialx
#define glMaterialx(...) ((void)0)
#endif
#ifndef glMaterialxv
#define glMaterialxv(...) ((void)0)
#endif
#ifndef glMultMatrixx
#define glMultMatrixx(...) ((void)0)
#endif
#ifndef glMultiTexCoord4x
#define glMultiTexCoord4x(...) ((void)0)
#endif
#ifndef glNormal3x
#define glNormal3x(...) ((void)0)
#endif
#ifndef glOrthox
#define glOrthox(...) ((void)0)
#endif
#ifndef glPointParameterx
#define glPointParameterx(...) ((void)0)
#endif
#ifndef glPointParameterxv
#define glPointParameterxv(...) ((void)0)
#endif
#ifndef glPointSizex
#define glPointSizex(...) ((void)0)
#endif
#ifndef glPolygonOffsetx
#define glPolygonOffsetx(...) ((void)0)
#endif
#ifndef glRotatex
#define glRotatex(...) ((void)0)
#endif
#ifndef glSampleCoveragex
#define glSampleCoveragex(...) ((void)0)
#endif
#ifndef glScalex
#define glScalex(...) ((void)0)
#endif
#ifndef glTexEnvx
#define glTexEnvx(...) ((void)0)
#endif
#ifndef glTexEnvxv
#define glTexEnvxv(...) ((void)0)
#endif
#ifndef glTexParameterx
#define glTexParameterx(...) ((void)0)
#endif
#ifndef glTexParameterxv
#define glTexParameterxv(...) ((void)0)
#endif
#ifndef glTranslatex
#define glTranslatex(...) ((void)0)
#endif

// GLES function stubs (not available on desktop GL)
#ifndef glTexSubImage3DOES
#define glTexSubImage3DOES(...) ((void)0)
#endif

// ANGLE extension stubs
#ifndef glBeginQueryANGLE
#define glBeginQueryANGLE(...) ((void)0)
#endif
#ifndef glBlitFramebufferANGLE
#define glBlitFramebufferANGLE(...) ((void)0)
#endif
#ifndef glDeleteQueriesANGLE
#define glDeleteQueriesANGLE(...) ((void)0)
#endif
#ifndef glDrawArraysInstancedANGLE
#define glDrawArraysInstancedANGLE(...) ((void)0)
#endif
#ifndef glDrawElementsInstancedANGLE
#define glDrawElementsInstancedANGLE(...) ((void)0)
#endif
#ifndef glEndQueryANGLE
#define glEndQueryANGLE(...) ((void)0)
#endif
#ifndef glGenQueriesANGLE
#define glGenQueriesANGLE(...) ((void)0)
#endif
#ifndef glGetQueryObjecti64vANGLE
#define glGetQueryObjecti64vANGLE(...) ((void)0)
#endif
#ifndef glGetQueryObjectivANGLE
#define glGetQueryObjectivANGLE(...) ((void)0)
#endif
#ifndef glGetQueryObjectui64vANGLE
#define glGetQueryObjectui64vANGLE(...) ((void)0)
#endif
#ifndef glGetQueryObjectuivANGLE
#define glGetQueryObjectuivANGLE(...) ((void)0)
#endif
#ifndef glQueryCounterANGLE
#define glQueryCounterANGLE(...) ((void)0)
#endif
#ifndef glRenderbufferStorageMultisampleANGLE
#define glRenderbufferStorageMultisampleANGLE(...) ((void)0)
#endif
#ifndef glVertexAttribDivisorANGLE
#define glVertexAttribDivisorANGLE(...) ((void)0)
#endif

// Apple extension stubs
#ifndef glCopyTextureLevelsAPPLE
#define glCopyTextureLevelsAPPLE(...) ((void)0)
#endif
#ifndef glFinishRenderAPPLE
#define glFinishRenderAPPLE(...) ((void)0)
#endif
#ifndef glFlushRenderAPPLE
#define glFlushRenderAPPLE(...) ((void)0)
#endif
#ifndef glRenderbufferStorageMultisampleAPPLE
#define glRenderbufferStorageMultisampleAPPLE(...) ((void)0)
#endif
#ifndef glSwapAPPLE
#define glSwapAPPLE(...) ((void)0)
#endif
#ifndef glResolveMultisampleFramebufferAPPLE
#define glResolveMultisampleFramebufferAPPLE(...) ((void)0)
#endif
#ifndef glPointSizePointerAPPLE
#define glPointSizePointerAPPLE(...) ((void)0)
#endif
#ifndef glVertexPointSizefAPPLE
#define glVertexPointSizefAPPLE(...) ((void)0)
#endif
#ifndef glFenceSyncAPPLE
#define glFenceSyncAPPLE(...) (GLsync)0
#endif
#ifndef glDeleteSyncAPPLE
#define glDeleteSyncAPPLE(...) ((void)0)
#endif
#ifndef glClientWaitSyncAPPLE
#define glClientWaitSyncAPPLE(...) GL_WAIT_FAILED
#endif
#ifndef glWaitSyncAPPLE
#define glWaitSyncAPPLE(...) ((void)0)
#endif

// ATI extension stubs
#ifndef glBlendEquationSeparateATI
#define glBlendEquationSeparateATI(...) ((void)0)
#endif
#ifndef glPNTrianglesiATIX
#define glPNTrianglesiATIX(...) ((void)0)
#endif
#ifndef glPNTrianglesfATIX
#define glPNTrianglesfATIX(...) ((void)0)
#endif

// EXT extension stubs (not in GLAD GL 4.1 compat)
#ifndef glDrawArraysInstancedBaseInstanceEXT
#define glDrawArraysInstancedBaseInstanceEXT(...) ((void)0)
#endif
#ifndef glDrawElementsInstancedBaseInstanceEXT
#define glDrawElementsInstancedBaseInstanceEXT(...) ((void)0)
#endif
#ifndef glDrawElementsInstancedBaseVertexBaseInstanceEXT
#define glDrawElementsInstancedBaseVertexBaseInstanceEXT(...) ((void)0)
#endif
#ifndef glBindFragDataLocationIndexedEXT
#define glBindFragDataLocationIndexedEXT(...) ((void)0)
#endif
#ifndef glGetProgramResourceLocationIndexEXT
#define glGetProgramResourceLocationIndexEXT(...) (-1)
#endif
#ifndef glGetFragDataIndexEXT
#define glGetFragDataIndexEXT(...) (-1)
#endif
#ifndef glBufferStorageEXT
#define glBufferStorageEXT(...) ((void)0)
#endif
#ifndef glCopyImageSubDataEXT
#define glCopyImageSubDataEXT(...) ((void)0)
#endif
#ifndef glDiscardFramebufferEXT
#define glDiscardFramebufferEXT(...) ((void)0)
#endif
#ifndef glBeginQueryEXT
#define glBeginQueryEXT(...) ((void)0)
#endif
#ifndef glBlendEquationSeparateiEXT
#define glBlendEquationSeparateiEXT(...) ((void)0)
#endif
#ifndef glBlendEquationiEXT
#define glBlendEquationiEXT(...) ((void)0)
#endif
#ifndef glBlendFuncSeparateiEXT
#define glBlendFuncSeparateiEXT(...) ((void)0)
#endif
#ifndef glBlendFunciEXT
#define glBlendFunciEXT(...) ((void)0)
#endif
#ifndef glColorMaskiEXT
#define glColorMaskiEXT(...) ((void)0)
#endif
#ifndef glDeleteQueriesEXT
#define glDeleteQueriesEXT(...) ((void)0)
#endif
#ifndef glDisableiEXT
#define glDisableiEXT(...) ((void)0)
#endif
#ifndef glDrawBuffersEXT
#define glDrawBuffersEXT(...) ((void)0)
#endif
#ifndef glDrawElementsBaseVertexEXT
#define glDrawElementsBaseVertexEXT(...) ((void)0)
#endif
#ifndef glDrawElementsInstancedBaseVertexEXT
#define glDrawElementsInstancedBaseVertexEXT(...) ((void)0)
#endif
#ifndef glDrawRangeElementsBaseVertexEXT
#define glDrawRangeElementsBaseVertexEXT(...) ((void)0)
#endif
#ifndef glEnableiEXT
#define glEnableiEXT(...) ((void)0)
#endif
#ifndef glEndQueryEXT
#define glEndQueryEXT(...) ((void)0)
#endif
#ifndef glGenQueriesEXT
#define glGenQueriesEXT(...) ((void)0)
#endif
#ifndef glGetQueryObjectivEXT
#define glGetQueryObjectivEXT(...) ((void)0)
#endif
#ifndef glGetQueryObjectuivEXT
#define glGetQueryObjectuivEXT(...) ((void)0)
#endif
#ifndef glMultiDrawElementsBaseVertexEXT
#define glMultiDrawElementsBaseVertexEXT(...) ((void)0)
#endif
#ifndef glQueryCounterEXT
#define glQueryCounterEXT(...) ((void)0)
#endif
#ifndef glActiveShaderProgramEXT
#define glActiveShaderProgramEXT(...) ((void)0)
#endif
#ifndef glBindProgramPipelineEXT
#define glBindProgramPipelineEXT(...) ((void)0)
#endif
#ifndef glClearPixelLocalStorageuiEXT
#define glClearPixelLocalStorageuiEXT(...) ((void)0)
#endif
#ifndef glCreateShaderProgramvEXT
#define glCreateShaderProgramvEXT(...) 0
#endif
#ifndef glDeleteProgramPipelinesEXT
#define glDeleteProgramPipelinesEXT(...) ((void)0)
#endif
#ifndef glDrawBuffersIndexedEXT
#define glDrawBuffersIndexedEXT(...) ((void)0)
#endif
#ifndef glFlushMappedBufferRangeEXT
#define glFlushMappedBufferRangeEXT(...) ((void)0)
#endif
#ifndef glFramebufferPixelLocalStorageSizeEXT
#define glFramebufferPixelLocalStorageSizeEXT(...) ((void)0)
#endif
#ifndef glFramebufferTexture2DMultisampleEXT
#define glFramebufferTexture2DMultisampleEXT(...) ((void)0)
#endif
#ifndef glGenProgramPipelinesEXT
#define glGenProgramPipelinesEXT(...) ((void)0)
#endif
#ifndef glMapBufferRangeEXT
#define glMapBufferRangeEXT(...) NULL
#endif
#ifndef glMultiDrawArraysIndirectEXT
#define glMultiDrawArraysIndirectEXT(...) ((void)0)
#endif
#ifndef glMultiDrawElementsIndirectEXT
#define glMultiDrawElementsIndirectEXT(...) ((void)0)
#endif
#ifndef glPrimitiveBoundingBoxEXT
#define glPrimitiveBoundingBoxEXT(...) ((void)0)
#endif
#ifndef glReadBufferIndexedEXT
#define glReadBufferIndexedEXT(...) ((void)0)
#endif
#ifndef glReadnPixelsEXT
#define glReadnPixelsEXT(...) ((void)0)
#endif
#ifndef glUseProgramStagesEXT
#define glUseProgramStagesEXT(...) ((void)0)
#endif
#ifndef glValidateProgramPipelineEXT
#define glValidateProgramPipelineEXT(...) ((void)0)
#endif
#ifndef glVertexAttribDivisorEXT
#define glVertexAttribDivisorEXT(...) ((void)0)
#endif
#ifndef glTexPageCommitmentEXT
#define glTexPageCommitmentEXT(...) ((void)0)
#endif
#ifndef glPatchParameteriEXT
#define glPatchParameteriEXT(...) ((void)0)
#endif
#ifndef glSamplerParameterIivEXT
#define glSamplerParameterIivEXT(...) ((void)0)
#endif
#ifndef glSamplerParameterIuivEXT
#define glSamplerParameterIuivEXT(...) ((void)0)
#endif
#ifndef glTexBufferRangeEXT
#define glTexBufferRangeEXT(...) ((void)0)
#endif
#ifndef glTextureViewEXT
#define glTextureViewEXT(...) ((void)0)
#endif

// IMG extension stubs
#ifndef glRenderbufferStorageMultisampleIMG
#define glRenderbufferStorageMultisampleIMG(...) ((void)0)
#endif
#ifndef glFramebufferTexture2DMultisampleIMG
#define glFramebufferTexture2DMultisampleIMG(...) ((void)0)
#endif

// KHR extension stubs (not all are in GLAD)
#ifndef glPushDebugGroupKHR
#define glPushDebugGroupKHR(...) ((void)0)
#endif
#ifndef glPopDebugGroupKHR
#define glPopDebugGroupKHR(...) ((void)0)
#endif
#ifndef glObjectLabelKHR
#define glObjectLabelKHR(...) ((void)0)
#endif
#ifndef glObjectPtrLabelKHR
#define glObjectPtrLabelKHR(...) ((void)0)
#endif
#ifndef glReadnPixelsKHR
#define glReadnPixelsKHR(...) ((void)0)
#endif

// KTX buffer region stubs
#ifndef glNewBufferRegion
#define glNewBufferRegion(...) 0
#endif
#ifndef glDeleteBufferRegion
#define glDeleteBufferRegion(...) ((void)0)
#endif
#ifndef glReadBufferRegion
#define glReadBufferRegion(...) ((void)0)
#endif
#ifndef glDrawBufferRegion
#define glDrawBufferRegion(...) ((void)0)
#endif

// NV extension stubs
#ifndef glCoverageMaskNV
#define glCoverageMaskNV(...) ((void)0)
#endif
#ifndef glCoverageOperationNV
#define glCoverageOperationNV(...) ((void)0)
#endif
#ifndef glBlitFramebufferNV
#define glBlitFramebufferNV(...) ((void)0)
#endif
#ifndef glDrawBuffersNV
#define glDrawBuffersNV(...) ((void)0)
#endif
#ifndef glReadBufferNV
#define glReadBufferNV(...) ((void)0)
#endif

// OES extension stubs
#ifndef glBindFramebufferOES
#define glBindFramebufferOES(...) ((void)0)
#endif
#ifndef glBindRenderbufferOES
#define glBindRenderbufferOES(...) ((void)0)
#endif
#ifndef glBlendEquationOES
#define glBlendEquationOES(...) ((void)0)
#endif
#ifndef glBlendEquationSeparateOES
#define glBlendEquationSeparateOES(...) ((void)0)
#endif
#ifndef glBlendFuncSeparateOES
#define glBlendFuncSeparateOES(...) ((void)0)
#endif
#ifndef glDeleteFramebuffersOES
#define glDeleteFramebuffersOES(...) ((void)0)
#endif
#ifndef glDeleteRenderbuffersOES
#define glDeleteRenderbuffersOES(...) ((void)0)
#endif
#ifndef glDrawTexfOES
#define glDrawTexfOES(...) ((void)0)
#endif
#ifndef glDrawTexfvOES
#define glDrawTexfvOES(...) ((void)0)
#endif
#ifndef glDrawTexiOES
#define glDrawTexiOES(...) ((void)0)
#endif
#ifndef glDrawTexivOES
#define glDrawTexivOES(...) ((void)0)
#endif
#ifndef glDrawTexsOES
#define glDrawTexsOES(...) ((void)0)
#endif
#ifndef glDrawTexsvOES
#define glDrawTexsvOES(...) ((void)0)
#endif
#ifndef glGenFramebuffersOES
#define glGenFramebuffersOES(...) ((void)0)
#endif
#ifndef glGenRenderbuffersOES
#define glGenRenderbuffersOES(...) ((void)0)
#endif
#ifndef glRenderbufferStorageOES
#define glRenderbufferStorageOES(...) ((void)0)
#endif
#ifndef glCheckFramebufferStatusOES
#define glCheckFramebufferStatusOES(...) 0
#endif
#ifndef glCompressedTexImage3DOES
#define glCompressedTexImage3DOES(...) ((void)0)
#endif
#ifndef glCompressedTexSubImage3DOES
#define glCompressedTexSubImage3DOES(...) ((void)0)
#endif
#ifndef glCopyTexSubImage3DOES
#define glCopyTexSubImage3DOES(...) ((void)0)
#endif
#ifndef glCurrentPaletteMatrixOES
#define glCurrentPaletteMatrixOES(...) ((void)0)
#endif
#ifndef glFramebufferRenderbufferOES
#define glFramebufferRenderbufferOES(...) ((void)0)
#endif
#ifndef glFramebufferTexture2DOES
#define glFramebufferTexture2DOES(...) ((void)0)
#endif
#ifndef glFramebufferTexture3DOES
#define glFramebufferTexture3DOES(...) ((void)0)
#endif
#ifndef glGenerateMipmapOES
#define glGenerateMipmapOES(...) ((void)0)
#endif
#ifndef glGetBufferPointervOES
#define glGetBufferPointervOES(...) ((void)0)
#endif
#ifndef glLoadPaletteFromModelViewMatrixOES
#define glLoadPaletteFromModelViewMatrixOES(...) ((void)0)
#endif
#ifndef glMapBufferOES
#define glMapBufferOES(...) NULL
#endif
#ifndef glMatrixIndexPointerOES
#define glMatrixIndexPointerOES(...) ((void)0)
#endif
#ifndef glPointSizePointerOES
#define glPointSizePointerOES(...) ((void)0)
#endif
#ifndef glProgramBinaryOES
#define glProgramBinaryOES(...) ((void)0)
#endif
#ifndef glTexGenfOES
#define glTexGenfOES(...) ((void)0)
#endif
#ifndef glTexImage3DOES
#define glTexImage3DOES(...) ((void)0)
#endif
#ifndef glUnmapBufferOES
#define glUnmapBufferOES(...) GL_FALSE
#endif
#ifndef glWeightPointerOES
#define glWeightPointerOES(...) ((void)0)
#endif
#ifndef glBindVertexArrayOES
#define glBindVertexArrayOES(...) ((void)0)
#endif
#ifndef glDeleteVertexArraysOES
#define glDeleteVertexArraysOES(...) ((void)0)
#endif
#ifndef glGenVertexArraysOES
#define glGenVertexArraysOES(...) ((void)0)
#endif
#ifndef glTexGenfvOES
#define glTexGenfvOES(...) ((void)0)
#endif
#ifndef glTexGeniOES
#define glTexGeniOES(...) ((void)0)
#endif
#ifndef glTexGenivOES
#define glTexGenivOES(...) ((void)0)
#endif

// WIN extension stubs
#ifndef glAddSwapHintRectWIN
#define glAddSwapHintRectWIN(...) ((void)0)
#endif

// =============================================================================
// EXT to Core Function Aliases
// =============================================================================
// macOS's OpenGL.framework only exports core GL functions, not EXT variants.
// GLAD generates separate function pointers for core and EXT versions, but
// only the core versions get loaded. Redirect EXT calls to core equivalents.
// =============================================================================

// GL_EXT_framebuffer_object -> Core (GL 3.0+)
#ifdef glGenFramebuffersEXT
#undef glGenFramebuffersEXT
#endif
#define glGenFramebuffersEXT glGenFramebuffers

#ifdef glDeleteFramebuffersEXT
#undef glDeleteFramebuffersEXT
#endif
#define glDeleteFramebuffersEXT glDeleteFramebuffers

#ifdef glBindFramebufferEXT
#undef glBindFramebufferEXT
#endif
#define glBindFramebufferEXT glBindFramebuffer

#ifdef glCheckFramebufferStatusEXT
#undef glCheckFramebufferStatusEXT
#endif
#define glCheckFramebufferStatusEXT glCheckFramebufferStatus

#ifdef glFramebufferTexture1DEXT
#undef glFramebufferTexture1DEXT
#endif
#define glFramebufferTexture1DEXT glFramebufferTexture1D

#ifdef glFramebufferTexture2DEXT
#undef glFramebufferTexture2DEXT
#endif
#define glFramebufferTexture2DEXT glFramebufferTexture2D

#ifdef glFramebufferTexture3DEXT
#undef glFramebufferTexture3DEXT
#endif
#define glFramebufferTexture3DEXT glFramebufferTexture3D

#ifdef glFramebufferRenderbufferEXT
#undef glFramebufferRenderbufferEXT
#endif
#define glFramebufferRenderbufferEXT glFramebufferRenderbuffer

#ifdef glGetFramebufferAttachmentParameterivEXT
#undef glGetFramebufferAttachmentParameterivEXT
#endif
#define glGetFramebufferAttachmentParameterivEXT glGetFramebufferAttachmentParameteriv

#ifdef glGenerateMipmapEXT
#undef glGenerateMipmapEXT
#endif
#define glGenerateMipmapEXT glGenerateMipmap

#ifdef glIsFramebufferEXT
#undef glIsFramebufferEXT
#endif
#define glIsFramebufferEXT glIsFramebuffer

// GL_EXT_framebuffer_object renderbuffer functions -> Core
#ifdef glGenRenderbuffersEXT
#undef glGenRenderbuffersEXT
#endif
#define glGenRenderbuffersEXT glGenRenderbuffers

#ifdef glDeleteRenderbuffersEXT
#undef glDeleteRenderbuffersEXT
#endif
#define glDeleteRenderbuffersEXT glDeleteRenderbuffers

#ifdef glBindRenderbufferEXT
#undef glBindRenderbufferEXT
#endif
#define glBindRenderbufferEXT glBindRenderbuffer

#ifdef glRenderbufferStorageEXT
#undef glRenderbufferStorageEXT
#endif
#define glRenderbufferStorageEXT glRenderbufferStorage

#ifdef glGetRenderbufferParameterivEXT
#undef glGetRenderbufferParameterivEXT
#endif
#define glGetRenderbufferParameterivEXT glGetRenderbufferParameteriv

#ifdef glIsRenderbufferEXT
#undef glIsRenderbufferEXT
#endif
#define glIsRenderbufferEXT glIsRenderbuffer

// GL_EXT_framebuffer_blit -> Core (GL 3.0+)
#ifdef glBlitFramebufferEXT
#undef glBlitFramebufferEXT
#endif
#define glBlitFramebufferEXT glBlitFramebuffer

// GL_EXT_framebuffer_multisample -> Core (GL 3.0+)
#ifdef glRenderbufferStorageMultisampleEXT
#undef glRenderbufferStorageMultisampleEXT
#endif
#define glRenderbufferStorageMultisampleEXT glRenderbufferStorageMultisample

// GL_EXT_geometry_shader4 -> Core (GL 3.2+)
#ifdef glFramebufferTextureEXT
#undef glFramebufferTextureEXT
#endif
#define glFramebufferTextureEXT glFramebufferTexture

#ifdef glFramebufferTextureLayerEXT
#undef glFramebufferTextureLayerEXT
#endif
#define glFramebufferTextureLayerEXT glFramebufferTextureLayer

// GL_ARB_vertex_array_object (also EXT version) -> Core (GL 3.0+)
#ifdef glGenVertexArraysAPPLE
#undef glGenVertexArraysAPPLE
#endif
#define glGenVertexArraysAPPLE glGenVertexArrays

#ifdef glDeleteVertexArraysAPPLE
#undef glDeleteVertexArraysAPPLE
#endif
#define glDeleteVertexArraysAPPLE glDeleteVertexArrays

#ifdef glBindVertexArrayAPPLE
#undef glBindVertexArrayAPPLE
#endif
#define glBindVertexArrayAPPLE glBindVertexArray

#ifdef glIsVertexArrayAPPLE
#undef glIsVertexArrayAPPLE
#endif
#define glIsVertexArrayAPPLE glIsVertexArray

// GL_EXT_draw_buffers2 -> Core (GL 3.0+)
#ifdef glColorMaskIndexedEXT
#undef glColorMaskIndexedEXT
#endif
#define glColorMaskIndexedEXT glColorMaski

#ifdef glEnableIndexedEXT
#undef glEnableIndexedEXT
#endif
#define glEnableIndexedEXT glEnablei

#ifdef glDisableIndexedEXT
#undef glDisableIndexedEXT
#endif
#define glDisableIndexedEXT glDisablei

#ifdef glIsEnabledIndexedEXT
#undef glIsEnabledIndexedEXT
#endif
#define glIsEnabledIndexedEXT glIsEnabledi

#ifdef glGetBooleanIndexedvEXT
#undef glGetBooleanIndexedvEXT
#endif
#define glGetBooleanIndexedvEXT glGetBooleani_v

#ifdef glGetIntegerIndexedvEXT
#undef glGetIntegerIndexedvEXT
#endif
#define glGetIntegerIndexedvEXT glGetIntegeri_v

// GL_EXT_texture_integer -> Core (GL 3.0+)
#ifdef glClearColorIiEXT
#undef glClearColorIiEXT
#endif
#define glClearColorIiEXT glClearColorIiEXT_stub
static inline void glClearColorIiEXT_stub(GLint r, GLint g, GLint b, GLint a) { (void)r; (void)g; (void)b; (void)a; }

#ifdef glClearColorIuiEXT
#undef glClearColorIuiEXT
#endif
#define glClearColorIuiEXT glClearColorIuiEXT_stub
static inline void glClearColorIuiEXT_stub(GLuint r, GLuint g, GLuint b, GLuint a) { (void)r; (void)g; (void)b; (void)a; }

// GL_EXT_gpu_shader4 -> Core (GL 3.0+)
#ifdef glVertexAttribI1iEXT
#undef glVertexAttribI1iEXT
#endif
#define glVertexAttribI1iEXT glVertexAttribI1i

#ifdef glVertexAttribI2iEXT
#undef glVertexAttribI2iEXT
#endif
#define glVertexAttribI2iEXT glVertexAttribI2i

#ifdef glVertexAttribI3iEXT
#undef glVertexAttribI3iEXT
#endif
#define glVertexAttribI3iEXT glVertexAttribI3i

#ifdef glVertexAttribI4iEXT
#undef glVertexAttribI4iEXT
#endif
#define glVertexAttribI4iEXT glVertexAttribI4i

#ifdef glVertexAttribI1uiEXT
#undef glVertexAttribI1uiEXT
#endif
#define glVertexAttribI1uiEXT glVertexAttribI1ui

#ifdef glVertexAttribI2uiEXT
#undef glVertexAttribI2uiEXT
#endif
#define glVertexAttribI2uiEXT glVertexAttribI2ui

#ifdef glVertexAttribI3uiEXT
#undef glVertexAttribI3uiEXT
#endif
#define glVertexAttribI3uiEXT glVertexAttribI3ui

#ifdef glVertexAttribI4uiEXT
#undef glVertexAttribI4uiEXT
#endif
#define glVertexAttribI4uiEXT glVertexAttribI4ui

#ifdef glVertexAttribI1ivEXT
#undef glVertexAttribI1ivEXT
#endif
#define glVertexAttribI1ivEXT glVertexAttribI1iv

#ifdef glVertexAttribI2ivEXT
#undef glVertexAttribI2ivEXT
#endif
#define glVertexAttribI2ivEXT glVertexAttribI2iv

#ifdef glVertexAttribI3ivEXT
#undef glVertexAttribI3ivEXT
#endif
#define glVertexAttribI3ivEXT glVertexAttribI3iv

#ifdef glVertexAttribI4ivEXT
#undef glVertexAttribI4ivEXT
#endif
#define glVertexAttribI4ivEXT glVertexAttribI4iv

#ifdef glVertexAttribI1uivEXT
#undef glVertexAttribI1uivEXT
#endif
#define glVertexAttribI1uivEXT glVertexAttribI1uiv

#ifdef glVertexAttribI2uivEXT
#undef glVertexAttribI2uivEXT
#endif
#define glVertexAttribI2uivEXT glVertexAttribI2uiv

#ifdef glVertexAttribI3uivEXT
#undef glVertexAttribI3uivEXT
#endif
#define glVertexAttribI3uivEXT glVertexAttribI3uiv

#ifdef glVertexAttribI4uivEXT
#undef glVertexAttribI4uivEXT
#endif
#define glVertexAttribI4uivEXT glVertexAttribI4uiv

#ifdef glVertexAttribI4bvEXT
#undef glVertexAttribI4bvEXT
#endif
#define glVertexAttribI4bvEXT glVertexAttribI4bv

#ifdef glVertexAttribI4svEXT
#undef glVertexAttribI4svEXT
#endif
#define glVertexAttribI4svEXT glVertexAttribI4sv

#ifdef glVertexAttribI4ubvEXT
#undef glVertexAttribI4ubvEXT
#endif
#define glVertexAttribI4ubvEXT glVertexAttribI4ubv

#ifdef glVertexAttribI4usvEXT
#undef glVertexAttribI4usvEXT
#endif
#define glVertexAttribI4usvEXT glVertexAttribI4usv

#ifdef glVertexAttribIPointerEXT
#undef glVertexAttribIPointerEXT
#endif
#define glVertexAttribIPointerEXT glVertexAttribIPointer

#ifdef glGetVertexAttribIivEXT
#undef glGetVertexAttribIivEXT
#endif
#define glGetVertexAttribIivEXT glGetVertexAttribIiv

#ifdef glGetVertexAttribIuivEXT
#undef glGetVertexAttribIuivEXT
#endif
#define glGetVertexAttribIuivEXT glGetVertexAttribIuiv

#ifdef glUniform1uiEXT
#undef glUniform1uiEXT
#endif
#define glUniform1uiEXT glUniform1ui

#ifdef glUniform2uiEXT
#undef glUniform2uiEXT
#endif
#define glUniform2uiEXT glUniform2ui

#ifdef glUniform3uiEXT
#undef glUniform3uiEXT
#endif
#define glUniform3uiEXT glUniform3ui

#ifdef glUniform4uiEXT
#undef glUniform4uiEXT
#endif
#define glUniform4uiEXT glUniform4ui

#ifdef glUniform1uivEXT
#undef glUniform1uivEXT
#endif
#define glUniform1uivEXT glUniform1uiv

#ifdef glUniform2uivEXT
#undef glUniform2uivEXT
#endif
#define glUniform2uivEXT glUniform2uiv

#ifdef glUniform3uivEXT
#undef glUniform3uivEXT
#endif
#define glUniform3uivEXT glUniform3uiv

#ifdef glUniform4uivEXT
#undef glUniform4uivEXT
#endif
#define glUniform4uivEXT glUniform4uiv

#ifdef glGetUniformuivEXT
#undef glGetUniformuivEXT
#endif
#define glGetUniformuivEXT glGetUniformuiv

#ifdef glBindFragDataLocationEXT
#undef glBindFragDataLocationEXT
#endif
#define glBindFragDataLocationEXT glBindFragDataLocation

#ifdef glGetFragDataLocationEXT
#undef glGetFragDataLocationEXT
#endif
#define glGetFragDataLocationEXT glGetFragDataLocation

// GL_EXT_transform_feedback -> Core (GL 3.0+)
#ifdef glBeginTransformFeedbackEXT
#undef glBeginTransformFeedbackEXT
#endif
#define glBeginTransformFeedbackEXT glBeginTransformFeedback

#ifdef glEndTransformFeedbackEXT
#undef glEndTransformFeedbackEXT
#endif
#define glEndTransformFeedbackEXT glEndTransformFeedback

#ifdef glBindBufferRangeEXT
#undef glBindBufferRangeEXT
#endif
#define glBindBufferRangeEXT glBindBufferRange

#ifdef glBindBufferOffsetEXT
#undef glBindBufferOffsetEXT
#endif
// No direct core equivalent - stub it
#define glBindBufferOffsetEXT(target, index, buffer, offset) glBindBufferRange(target, index, buffer, offset, 0)

#ifdef glBindBufferBaseEXT
#undef glBindBufferBaseEXT
#endif
#define glBindBufferBaseEXT glBindBufferBase

#ifdef glTransformFeedbackVaryingsEXT
#undef glTransformFeedbackVaryingsEXT
#endif
#define glTransformFeedbackVaryingsEXT glTransformFeedbackVaryings

#ifdef glGetTransformFeedbackVaryingEXT
#undef glGetTransformFeedbackVaryingEXT
#endif
#define glGetTransformFeedbackVaryingEXT glGetTransformFeedbackVarying

// GL_ARB_draw_instanced / GL_EXT_draw_instanced -> Core (GL 3.1+)
#ifdef glDrawArraysInstancedARB
#undef glDrawArraysInstancedARB
#endif
#define glDrawArraysInstancedARB glDrawArraysInstanced

#ifdef glDrawElementsInstancedARB
#undef glDrawElementsInstancedARB
#endif
#define glDrawElementsInstancedARB glDrawElementsInstanced

#ifdef glDrawArraysInstancedEXT
#undef glDrawArraysInstancedEXT
#endif
#define glDrawArraysInstancedEXT glDrawArraysInstanced

#ifdef glDrawElementsInstancedEXT
#undef glDrawElementsInstancedEXT
#endif
#define glDrawElementsInstancedEXT glDrawElementsInstanced

// GL_ARB_texture_buffer_object -> Core (GL 3.1+)
#ifdef glTexBufferARB
#undef glTexBufferARB
#endif
#define glTexBufferARB glTexBuffer

#ifdef glTexBufferEXT
#undef glTexBufferEXT
#endif
#define glTexBufferEXT glTexBuffer

// GL_EXT_texture3D -> Core (GL 1.2+)
#ifdef glTexImage3DEXT
#undef glTexImage3DEXT
#endif
#define glTexImage3DEXT glTexImage3D

#ifdef glTexSubImage3DEXT
#undef glTexSubImage3DEXT
#endif
#define glTexSubImage3DEXT glTexSubImage3D

// GL_EXT_copy_texture -> Core (GL 1.1+)
#ifdef glCopyTexImage1DEXT
#undef glCopyTexImage1DEXT
#endif
#define glCopyTexImage1DEXT glCopyTexImage1D

#ifdef glCopyTexImage2DEXT
#undef glCopyTexImage2DEXT
#endif
#define glCopyTexImage2DEXT glCopyTexImage2D

#ifdef glCopyTexSubImage1DEXT
#undef glCopyTexSubImage1DEXT
#endif
#define glCopyTexSubImage1DEXT glCopyTexSubImage1D

#ifdef glCopyTexSubImage2DEXT
#undef glCopyTexSubImage2DEXT
#endif
#define glCopyTexSubImage2DEXT glCopyTexSubImage2D

#ifdef glCopyTexSubImage3DEXT
#undef glCopyTexSubImage3DEXT
#endif
#define glCopyTexSubImage3DEXT glCopyTexSubImage3D

// GL_EXT_subtexture -> Core (GL 1.1+)
#ifdef glTexSubImage1DEXT
#undef glTexSubImage1DEXT
#endif
#define glTexSubImage1DEXT glTexSubImage1D

#ifdef glTexSubImage2DEXT
#undef glTexSubImage2DEXT
#endif
#define glTexSubImage2DEXT glTexSubImage2D

// GL_EXT_blend_color -> Core (GL 1.4+)
#ifdef glBlendColorEXT
#undef glBlendColorEXT
#endif
#define glBlendColorEXT glBlendColor

// GL_EXT_blend_minmax -> Core (GL 1.4+)
#ifdef glBlendEquationEXT
#undef glBlendEquationEXT
#endif
#define glBlendEquationEXT glBlendEquation

// GL_EXT_blend_func_separate -> Core (GL 1.4+)
#ifdef glBlendFuncSeparateEXT
#undef glBlendFuncSeparateEXT
#endif
#define glBlendFuncSeparateEXT glBlendFuncSeparate

// GL_EXT_blend_equation_separate -> Core (GL 2.0+)
#ifdef glBlendEquationSeparateEXT
#undef glBlendEquationSeparateEXT
#endif
#define glBlendEquationSeparateEXT glBlendEquationSeparate

// GL_ARB_multitexture -> Core (GL 1.3+)
#ifdef glActiveTextureARB
#undef glActiveTextureARB
#endif
#define glActiveTextureARB glActiveTexture

#ifdef glClientActiveTextureARB
#undef glClientActiveTextureARB
#endif
#define glClientActiveTextureARB(...) ((void)0)

#ifdef glMultiTexCoord1dARB
#undef glMultiTexCoord1dARB
#endif
#define glMultiTexCoord1dARB(...) ((void)0)

#ifdef glMultiTexCoord1dvARB
#undef glMultiTexCoord1dvARB
#endif
#define glMultiTexCoord1dvARB(...) ((void)0)

#ifdef glMultiTexCoord1fARB
#undef glMultiTexCoord1fARB
#endif
#define glMultiTexCoord1fARB(...) ((void)0)

#ifdef glMultiTexCoord1fvARB
#undef glMultiTexCoord1fvARB
#endif
#define glMultiTexCoord1fvARB(...) ((void)0)

#ifdef glMultiTexCoord1iARB
#undef glMultiTexCoord1iARB
#endif
#define glMultiTexCoord1iARB(...) ((void)0)

#ifdef glMultiTexCoord1ivARB
#undef glMultiTexCoord1ivARB
#endif
#define glMultiTexCoord1ivARB(...) ((void)0)

#ifdef glMultiTexCoord1sARB
#undef glMultiTexCoord1sARB
#endif
#define glMultiTexCoord1sARB(...) ((void)0)

#ifdef glMultiTexCoord1svARB
#undef glMultiTexCoord1svARB
#endif
#define glMultiTexCoord1svARB(...) ((void)0)

#ifdef glMultiTexCoord2dARB
#undef glMultiTexCoord2dARB
#endif
#define glMultiTexCoord2dARB(...) ((void)0)

#ifdef glMultiTexCoord2dvARB
#undef glMultiTexCoord2dvARB
#endif
#define glMultiTexCoord2dvARB(...) ((void)0)

#ifdef glMultiTexCoord2fARB
#undef glMultiTexCoord2fARB
#endif
#define glMultiTexCoord2fARB(...) ((void)0)

#ifdef glMultiTexCoord2fvARB
#undef glMultiTexCoord2fvARB
#endif
#define glMultiTexCoord2fvARB(...) ((void)0)

#ifdef glMultiTexCoord2iARB
#undef glMultiTexCoord2iARB
#endif
#define glMultiTexCoord2iARB(...) ((void)0)

#ifdef glMultiTexCoord2ivARB
#undef glMultiTexCoord2ivARB
#endif
#define glMultiTexCoord2ivARB(...) ((void)0)

#ifdef glMultiTexCoord2sARB
#undef glMultiTexCoord2sARB
#endif
#define glMultiTexCoord2sARB(...) ((void)0)

#ifdef glMultiTexCoord2svARB
#undef glMultiTexCoord2svARB
#endif
#define glMultiTexCoord2svARB(...) ((void)0)

#ifdef glMultiTexCoord3dARB
#undef glMultiTexCoord3dARB
#endif
#define glMultiTexCoord3dARB(...) ((void)0)

#ifdef glMultiTexCoord3dvARB
#undef glMultiTexCoord3dvARB
#endif
#define glMultiTexCoord3dvARB(...) ((void)0)

#ifdef glMultiTexCoord3fARB
#undef glMultiTexCoord3fARB
#endif
#define glMultiTexCoord3fARB(...) ((void)0)

#ifdef glMultiTexCoord3fvARB
#undef glMultiTexCoord3fvARB
#endif
#define glMultiTexCoord3fvARB(...) ((void)0)

#ifdef glMultiTexCoord3iARB
#undef glMultiTexCoord3iARB
#endif
#define glMultiTexCoord3iARB(...) ((void)0)

#ifdef glMultiTexCoord3ivARB
#undef glMultiTexCoord3ivARB
#endif
#define glMultiTexCoord3ivARB(...) ((void)0)

#ifdef glMultiTexCoord3sARB
#undef glMultiTexCoord3sARB
#endif
#define glMultiTexCoord3sARB(...) ((void)0)

#ifdef glMultiTexCoord3svARB
#undef glMultiTexCoord3svARB
#endif
#define glMultiTexCoord3svARB(...) ((void)0)

#ifdef glMultiTexCoord4dARB
#undef glMultiTexCoord4dARB
#endif
#define glMultiTexCoord4dARB(...) ((void)0)

#ifdef glMultiTexCoord4dvARB
#undef glMultiTexCoord4dvARB
#endif
#define glMultiTexCoord4dvARB(...) ((void)0)

#ifdef glMultiTexCoord4fARB
#undef glMultiTexCoord4fARB
#endif
#define glMultiTexCoord4fARB(...) ((void)0)

#ifdef glMultiTexCoord4fvARB
#undef glMultiTexCoord4fvARB
#endif
#define glMultiTexCoord4fvARB(...) ((void)0)

#ifdef glMultiTexCoord4iARB
#undef glMultiTexCoord4iARB
#endif
#define glMultiTexCoord4iARB(...) ((void)0)

#ifdef glMultiTexCoord4ivARB
#undef glMultiTexCoord4ivARB
#endif
#define glMultiTexCoord4ivARB(...) ((void)0)

#ifdef glMultiTexCoord4sARB
#undef glMultiTexCoord4sARB
#endif
#define glMultiTexCoord4sARB(...) ((void)0)

#ifdef glMultiTexCoord4svARB
#undef glMultiTexCoord4svARB
#endif
#define glMultiTexCoord4svARB(...) ((void)0)

// GL_ARB_vertex_buffer_object -> Core (GL 1.5+)
#ifdef glBindBufferARB
#undef glBindBufferARB
#endif
#define glBindBufferARB glBindBuffer

#ifdef glDeleteBuffersARB
#undef glDeleteBuffersARB
#endif
#define glDeleteBuffersARB glDeleteBuffers

#ifdef glGenBuffersARB
#undef glGenBuffersARB
#endif
#define glGenBuffersARB glGenBuffers

#ifdef glIsBufferARB
#undef glIsBufferARB
#endif
#define glIsBufferARB glIsBuffer

#ifdef glBufferDataARB
#undef glBufferDataARB
#endif
#define glBufferDataARB glBufferData

#ifdef glBufferSubDataARB
#undef glBufferSubDataARB
#endif
#define glBufferSubDataARB glBufferSubData

#ifdef glGetBufferSubDataARB
#undef glGetBufferSubDataARB
#endif
#define glGetBufferSubDataARB glGetBufferSubData

#ifdef glMapBufferARB
#undef glMapBufferARB
#endif
#define glMapBufferARB glMapBuffer

#ifdef glUnmapBufferARB
#undef glUnmapBufferARB
#endif
#define glUnmapBufferARB glUnmapBuffer

#ifdef glGetBufferParameterivARB
#undef glGetBufferParameterivARB
#endif
#define glGetBufferParameterivARB glGetBufferParameteriv

#ifdef glGetBufferPointervARB
#undef glGetBufferPointervARB
#endif
#define glGetBufferPointervARB glGetBufferPointerv

// GL_ARB_shader_objects -> Core (GL 2.0+)
#ifdef glDeleteObjectARB
#undef glDeleteObjectARB
#endif
#define glDeleteObjectARB(obj) do { if (glIsProgram(obj)) glDeleteProgram(obj); else if (glIsShader(obj)) glDeleteShader(obj); } while(0)

#ifdef glGetHandleARB
#undef glGetHandleARB
#endif
#define glGetHandleARB(pname) 0

#ifdef glDetachObjectARB
#undef glDetachObjectARB
#endif
#define glDetachObjectARB glDetachShader

#ifdef glCreateShaderObjectARB
#undef glCreateShaderObjectARB
#endif
#define glCreateShaderObjectARB glCreateShader

#ifdef glShaderSourceARB
#undef glShaderSourceARB
#endif
#define glShaderSourceARB glShaderSource

#ifdef glCompileShaderARB
#undef glCompileShaderARB
#endif
#define glCompileShaderARB glCompileShader

#ifdef glCreateProgramObjectARB
#undef glCreateProgramObjectARB
#endif
#define glCreateProgramObjectARB glCreateProgram

#ifdef glAttachObjectARB
#undef glAttachObjectARB
#endif
#define glAttachObjectARB glAttachShader

#ifdef glLinkProgramARB
#undef glLinkProgramARB
#endif
#define glLinkProgramARB glLinkProgram

#ifdef glUseProgramObjectARB
#undef glUseProgramObjectARB
#endif
#define glUseProgramObjectARB glUseProgram

#ifdef glValidateProgramARB
#undef glValidateProgramARB
#endif
#define glValidateProgramARB glValidateProgram

#ifdef glUniform1fARB
#undef glUniform1fARB
#endif
#define glUniform1fARB glUniform1f

#ifdef glUniform2fARB
#undef glUniform2fARB
#endif
#define glUniform2fARB glUniform2f

#ifdef glUniform3fARB
#undef glUniform3fARB
#endif
#define glUniform3fARB glUniform3f

#ifdef glUniform4fARB
#undef glUniform4fARB
#endif
#define glUniform4fARB glUniform4f

#ifdef glUniform1iARB
#undef glUniform1iARB
#endif
#define glUniform1iARB glUniform1i

#ifdef glUniform2iARB
#undef glUniform2iARB
#endif
#define glUniform2iARB glUniform2i

#ifdef glUniform3iARB
#undef glUniform3iARB
#endif
#define glUniform3iARB glUniform3i

#ifdef glUniform4iARB
#undef glUniform4iARB
#endif
#define glUniform4iARB glUniform4i

#ifdef glUniform1fvARB
#undef glUniform1fvARB
#endif
#define glUniform1fvARB glUniform1fv

#ifdef glUniform2fvARB
#undef glUniform2fvARB
#endif
#define glUniform2fvARB glUniform2fv

#ifdef glUniform3fvARB
#undef glUniform3fvARB
#endif
#define glUniform3fvARB glUniform3fv

#ifdef glUniform4fvARB
#undef glUniform4fvARB
#endif
#define glUniform4fvARB glUniform4fv

#ifdef glUniform1ivARB
#undef glUniform1ivARB
#endif
#define glUniform1ivARB glUniform1iv

#ifdef glUniform2ivARB
#undef glUniform2ivARB
#endif
#define glUniform2ivARB glUniform2iv

#ifdef glUniform3ivARB
#undef glUniform3ivARB
#endif
#define glUniform3ivARB glUniform3iv

#ifdef glUniform4ivARB
#undef glUniform4ivARB
#endif
#define glUniform4ivARB glUniform4iv

#ifdef glUniformMatrix2fvARB
#undef glUniformMatrix2fvARB
#endif
#define glUniformMatrix2fvARB glUniformMatrix2fv

#ifdef glUniformMatrix3fvARB
#undef glUniformMatrix3fvARB
#endif
#define glUniformMatrix3fvARB glUniformMatrix3fv

#ifdef glUniformMatrix4fvARB
#undef glUniformMatrix4fvARB
#endif
#define glUniformMatrix4fvARB glUniformMatrix4fv

#ifdef glGetObjectParameterfvARB
#undef glGetObjectParameterfvARB
#endif
#define glGetObjectParameterfvARB(...) ((void)0)

#ifdef glGetObjectParameterivARB
#undef glGetObjectParameterivARB
#endif
#define glGetObjectParameterivARB(...) ((void)0)

#ifdef glGetInfoLogARB
#undef glGetInfoLogARB
#endif
#define glGetInfoLogARB(obj, maxLen, len, log) do { if (glIsProgram(obj)) glGetProgramInfoLog(obj, maxLen, len, log); else glGetShaderInfoLog(obj, maxLen, len, log); } while(0)

#ifdef glGetAttachedObjectsARB
#undef glGetAttachedObjectsARB
#endif
#define glGetAttachedObjectsARB glGetAttachedShaders

#ifdef glGetUniformLocationARB
#undef glGetUniformLocationARB
#endif
#define glGetUniformLocationARB glGetUniformLocation

#ifdef glGetActiveUniformARB
#undef glGetActiveUniformARB
#endif
#define glGetActiveUniformARB glGetActiveUniform

#ifdef glGetUniformfvARB
#undef glGetUniformfvARB
#endif
#define glGetUniformfvARB glGetUniformfv

#ifdef glGetUniformivARB
#undef glGetUniformivARB
#endif
#define glGetUniformivARB glGetUniformiv

#ifdef glGetShaderSourceARB
#undef glGetShaderSourceARB
#endif
#define glGetShaderSourceARB glGetShaderSource

// GL_ARB_vertex_shader -> Core (GL 2.0+)
#ifdef glBindAttribLocationARB
#undef glBindAttribLocationARB
#endif
#define glBindAttribLocationARB glBindAttribLocation

#ifdef glGetActiveAttribARB
#undef glGetActiveAttribARB
#endif
#define glGetActiveAttribARB glGetActiveAttrib

#ifdef glGetAttribLocationARB
#undef glGetAttribLocationARB
#endif
#define glGetAttribLocationARB glGetAttribLocation

// GL_ARB_occlusion_query -> Core (GL 1.5+)
#ifdef glGenQueriesARB
#undef glGenQueriesARB
#endif
#define glGenQueriesARB glGenQueries

#ifdef glDeleteQueriesARB
#undef glDeleteQueriesARB
#endif
#define glDeleteQueriesARB glDeleteQueries

#ifdef glIsQueryARB
#undef glIsQueryARB
#endif
#define glIsQueryARB glIsQuery

#ifdef glBeginQueryARB
#undef glBeginQueryARB
#endif
#define glBeginQueryARB glBeginQuery

#ifdef glEndQueryARB
#undef glEndQueryARB
#endif
#define glEndQueryARB glEndQuery

#ifdef glGetQueryivARB
#undef glGetQueryivARB
#endif
#define glGetQueryivARB glGetQueryiv

#ifdef glGetQueryObjectivARB
#undef glGetQueryObjectivARB
#endif
#define glGetQueryObjectivARB glGetQueryObjectiv

#ifdef glGetQueryObjectuivARB
#undef glGetQueryObjectuivARB
#endif
#define glGetQueryObjectuivARB glGetQueryObjectuiv

// GL_ARB_point_parameters -> Core (GL 1.4+)
#ifdef glPointParameterfARB
#undef glPointParameterfARB
#endif
#define glPointParameterfARB glPointParameterf

#ifdef glPointParameterfvARB
#undef glPointParameterfvARB
#endif
#define glPointParameterfvARB glPointParameterfv

// GL_EXT_point_parameters -> Core (GL 1.4+)
#ifdef glPointParameterfEXT
#undef glPointParameterfEXT
#endif
#define glPointParameterfEXT glPointParameterf

#ifdef glPointParameterfvEXT
#undef glPointParameterfvEXT
#endif
#define glPointParameterfvEXT glPointParameterfv

// GL_ARB_draw_buffers -> Core (GL 2.0+)
#ifdef glDrawBuffersARB
#undef glDrawBuffersARB
#endif
#define glDrawBuffersARB glDrawBuffers

// GL_EXT_draw_buffers -> Core (GL 2.0+)
#ifdef glDrawBuffersEXT
#undef glDrawBuffersEXT
#endif
#define glDrawBuffersEXT glDrawBuffers

// GL_EXT_stencil_two_side -> Core (via separate stencil)
#ifdef glActiveStencilFaceEXT
#undef glActiveStencilFaceEXT
#endif
#define glActiveStencilFaceEXT(...) ((void)0)

// GL_ARB_map_buffer_range -> Core (GL 3.0+)
#ifdef glMapBufferRangeARB
#undef glMapBufferRangeARB
#endif
#define glMapBufferRangeARB glMapBufferRange

#ifdef glFlushMappedBufferRangeARB
#undef glFlushMappedBufferRangeARB
#endif
#define glFlushMappedBufferRangeARB glFlushMappedBufferRange

// GL_EXT_map_buffer_range -> Core (GL 3.0+)
#ifdef glMapBufferRangeEXT
#undef glMapBufferRangeEXT
#endif
#define glMapBufferRangeEXT glMapBufferRange

#ifdef glFlushMappedBufferRangeEXT
#undef glFlushMappedBufferRangeEXT
#endif
#define glFlushMappedBufferRangeEXT glFlushMappedBufferRange

// GL_ARB_copy_buffer -> Core (GL 3.1+)
#ifdef glCopyBufferSubDataARB
#undef glCopyBufferSubDataARB
#endif
#define glCopyBufferSubDataARB glCopyBufferSubData

// GL_ARB_uniform_buffer_object -> Core (GL 3.1+)
#ifdef glGetUniformIndicesARB
#undef glGetUniformIndicesARB
#endif
#define glGetUniformIndicesARB glGetUniformIndices

#ifdef glGetActiveUniformsivARB
#undef glGetActiveUniformsivARB
#endif
#define glGetActiveUniformsivARB glGetActiveUniformsiv

#ifdef glGetActiveUniformNameARB
#undef glGetActiveUniformNameARB
#endif
#define glGetActiveUniformNameARB glGetActiveUniformName

#ifdef glGetUniformBlockIndexARB
#undef glGetUniformBlockIndexARB
#endif
#define glGetUniformBlockIndexARB glGetUniformBlockIndex

#ifdef glGetActiveUniformBlockivARB
#undef glGetActiveUniformBlockivARB
#endif
#define glGetActiveUniformBlockivARB glGetActiveUniformBlockiv

#ifdef glGetActiveUniformBlockNameARB
#undef glGetActiveUniformBlockNameARB
#endif
#define glGetActiveUniformBlockNameARB glGetActiveUniformBlockName

#ifdef glUniformBlockBindingARB
#undef glUniformBlockBindingARB
#endif
#define glUniformBlockBindingARB glUniformBlockBinding

// GL_ARB_vertex_array_object -> Core (GL 3.0+)
#ifdef glBindVertexArrayARB
#undef glBindVertexArrayARB
#endif
#define glBindVertexArrayARB glBindVertexArray

#ifdef glDeleteVertexArraysARB
#undef glDeleteVertexArraysARB
#endif
#define glDeleteVertexArraysARB glDeleteVertexArrays

#ifdef glGenVertexArraysARB
#undef glGenVertexArraysARB
#endif
#define glGenVertexArraysARB glGenVertexArrays

#ifdef glIsVertexArrayARB
#undef glIsVertexArrayARB
#endif
#define glIsVertexArrayARB glIsVertexArray

// GL_ARB_sampler_objects -> Core (GL 3.3+)
#ifdef glGenSamplersARB
#undef glGenSamplersARB
#endif
#define glGenSamplersARB glGenSamplers

#ifdef glDeleteSamplersARB
#undef glDeleteSamplersARB
#endif
#define glDeleteSamplersARB glDeleteSamplers

#ifdef glIsSamplerARB
#undef glIsSamplerARB
#endif
#define glIsSamplerARB glIsSampler

#ifdef glBindSamplerARB
#undef glBindSamplerARB
#endif
#define glBindSamplerARB glBindSampler

#ifdef glSamplerParameteriARB
#undef glSamplerParameteriARB
#endif
#define glSamplerParameteriARB glSamplerParameteri

#ifdef glSamplerParameterivARB
#undef glSamplerParameterivARB
#endif
#define glSamplerParameterivARB glSamplerParameteriv

#ifdef glSamplerParameterfARB
#undef glSamplerParameterfARB
#endif
#define glSamplerParameterfARB glSamplerParameterf

#ifdef glSamplerParameterfvARB
#undef glSamplerParameterfvARB
#endif
#define glSamplerParameterfvARB glSamplerParameterfv

#ifdef glSamplerParameterIivARB
#undef glSamplerParameterIivARB
#endif
#define glSamplerParameterIivARB glSamplerParameterIiv

#ifdef glSamplerParameterIuivARB
#undef glSamplerParameterIuivARB
#endif
#define glSamplerParameterIuivARB glSamplerParameterIuiv

#ifdef glGetSamplerParameterivARB
#undef glGetSamplerParameterivARB
#endif
#define glGetSamplerParameterivARB glGetSamplerParameteriv

#ifdef glGetSamplerParameterIivARB
#undef glGetSamplerParameterIivARB
#endif
#define glGetSamplerParameterIivARB glGetSamplerParameterIiv

#ifdef glGetSamplerParameterfvARB
#undef glGetSamplerParameterfvARB
#endif
#define glGetSamplerParameterfvARB glGetSamplerParameterfv

#ifdef glGetSamplerParameterIuivARB
#undef glGetSamplerParameterIuivARB
#endif
#define glGetSamplerParameterIuivARB glGetSamplerParameterIuiv

// GL_ARB_sync -> Core (GL 3.2+)
#ifdef glFenceSyncARB
#undef glFenceSyncARB
#endif
#define glFenceSyncARB glFenceSync

#ifdef glIsSyncARB
#undef glIsSyncARB
#endif
#define glIsSyncARB glIsSync

#ifdef glDeleteSyncARB
#undef glDeleteSyncARB
#endif
#define glDeleteSyncARB glDeleteSync

#ifdef glClientWaitSyncARB
#undef glClientWaitSyncARB
#endif
#define glClientWaitSyncARB glClientWaitSync

#ifdef glWaitSyncARB
#undef glWaitSyncARB
#endif
#define glWaitSyncARB glWaitSync

#ifdef glGetInteger64vARB
#undef glGetInteger64vARB
#endif
#define glGetInteger64vARB glGetInteger64v

#ifdef glGetSyncivARB
#undef glGetSyncivARB
#endif
#define glGetSyncivARB glGetSynciv

// GL_ARB_timer_query -> Core (GL 3.3+)
#ifdef glQueryCounterARB
#undef glQueryCounterARB
#endif
#define glQueryCounterARB glQueryCounter

#ifdef glGetQueryObjecti64vARB
#undef glGetQueryObjecti64vARB
#endif
#define glGetQueryObjecti64vARB glGetQueryObjecti64v

#ifdef glGetQueryObjectui64vARB
#undef glGetQueryObjectui64vARB
#endif
#define glGetQueryObjectui64vARB glGetQueryObjectui64v

// GL_EXT_timer_query -> Core (GL 3.3+)
#ifdef glGetQueryObjecti64vEXT
#undef glGetQueryObjecti64vEXT
#endif
#define glGetQueryObjecti64vEXT glGetQueryObjecti64v

#ifdef glGetQueryObjectui64vEXT
#undef glGetQueryObjectui64vEXT
#endif
#define glGetQueryObjectui64vEXT glGetQueryObjectui64v

// GL_ARB_get_program_binary -> Core (GL 4.1+)
#ifdef glGetProgramBinaryARB
#undef glGetProgramBinaryARB
#endif
#define glGetProgramBinaryARB glGetProgramBinary

#ifdef glProgramBinaryARB
#undef glProgramBinaryARB
#endif
#define glProgramBinaryARB glProgramBinary

#ifdef glProgramParameteriARB
#undef glProgramParameteriARB
#endif
#define glProgramParameteriARB glProgramParameteri

// GL_ARB_separate_shader_objects -> Core (GL 4.1+)
#ifdef glUseProgramStagesARB
#undef glUseProgramStagesARB
#endif
#define glUseProgramStagesARB glUseProgramStages

#ifdef glActiveShaderProgramARB
#undef glActiveShaderProgramARB
#endif
#define glActiveShaderProgramARB glActiveShaderProgram

#ifdef glCreateShaderProgramvARB
#undef glCreateShaderProgramvARB
#endif
#define glCreateShaderProgramvARB glCreateShaderProgramv

#ifdef glBindProgramPipelineARB
#undef glBindProgramPipelineARB
#endif
#define glBindProgramPipelineARB glBindProgramPipeline

#ifdef glDeleteProgramPipelinesARB
#undef glDeleteProgramPipelinesARB
#endif
#define glDeleteProgramPipelinesARB glDeleteProgramPipelines

#ifdef glGenProgramPipelinesARB
#undef glGenProgramPipelinesARB
#endif
#define glGenProgramPipelinesARB glGenProgramPipelines

#ifdef glIsProgramPipelineARB
#undef glIsProgramPipelineARB
#endif
#define glIsProgramPipelineARB glIsProgramPipeline

#ifdef glGetProgramPipelineivARB
#undef glGetProgramPipelineivARB
#endif
#define glGetProgramPipelineivARB glGetProgramPipelineiv

#ifdef glProgramUniform1iARB
#undef glProgramUniform1iARB
#endif
#define glProgramUniform1iARB glProgramUniform1i

#ifdef glProgramUniform1ivARB
#undef glProgramUniform1ivARB
#endif
#define glProgramUniform1ivARB glProgramUniform1iv

#ifdef glProgramUniform1fARB
#undef glProgramUniform1fARB
#endif
#define glProgramUniform1fARB glProgramUniform1f

#ifdef glProgramUniform1fvARB
#undef glProgramUniform1fvARB
#endif
#define glProgramUniform1fvARB glProgramUniform1fv

#ifdef glProgramUniform1dARB
#undef glProgramUniform1dARB
#endif
#define glProgramUniform1dARB glProgramUniform1d

#ifdef glProgramUniform1dvARB
#undef glProgramUniform1dvARB
#endif
#define glProgramUniform1dvARB glProgramUniform1dv

#ifdef glProgramUniform1uiARB
#undef glProgramUniform1uiARB
#endif
#define glProgramUniform1uiARB glProgramUniform1ui

#ifdef glProgramUniform1uivARB
#undef glProgramUniform1uivARB
#endif
#define glProgramUniform1uivARB glProgramUniform1uiv

#ifdef glProgramUniform2iARB
#undef glProgramUniform2iARB
#endif
#define glProgramUniform2iARB glProgramUniform2i

#ifdef glProgramUniform2ivARB
#undef glProgramUniform2ivARB
#endif
#define glProgramUniform2ivARB glProgramUniform2iv

#ifdef glProgramUniform2fARB
#undef glProgramUniform2fARB
#endif
#define glProgramUniform2fARB glProgramUniform2f

#ifdef glProgramUniform2fvARB
#undef glProgramUniform2fvARB
#endif
#define glProgramUniform2fvARB glProgramUniform2fv

#ifdef glProgramUniform2dARB
#undef glProgramUniform2dARB
#endif
#define glProgramUniform2dARB glProgramUniform2d

#ifdef glProgramUniform2dvARB
#undef glProgramUniform2dvARB
#endif
#define glProgramUniform2dvARB glProgramUniform2dv

#ifdef glProgramUniform2uiARB
#undef glProgramUniform2uiARB
#endif
#define glProgramUniform2uiARB glProgramUniform2ui

#ifdef glProgramUniform2uivARB
#undef glProgramUniform2uivARB
#endif
#define glProgramUniform2uivARB glProgramUniform2uiv

#ifdef glProgramUniform3iARB
#undef glProgramUniform3iARB
#endif
#define glProgramUniform3iARB glProgramUniform3i

#ifdef glProgramUniform3ivARB
#undef glProgramUniform3ivARB
#endif
#define glProgramUniform3ivARB glProgramUniform3iv

#ifdef glProgramUniform3fARB
#undef glProgramUniform3fARB
#endif
#define glProgramUniform3fARB glProgramUniform3f

#ifdef glProgramUniform3fvARB
#undef glProgramUniform3fvARB
#endif
#define glProgramUniform3fvARB glProgramUniform3fv

#ifdef glProgramUniform3dARB
#undef glProgramUniform3dARB
#endif
#define glProgramUniform3dARB glProgramUniform3d

#ifdef glProgramUniform3dvARB
#undef glProgramUniform3dvARB
#endif
#define glProgramUniform3dvARB glProgramUniform3dv

#ifdef glProgramUniform3uiARB
#undef glProgramUniform3uiARB
#endif
#define glProgramUniform3uiARB glProgramUniform3ui

#ifdef glProgramUniform3uivARB
#undef glProgramUniform3uivARB
#endif
#define glProgramUniform3uivARB glProgramUniform3uiv

#ifdef glProgramUniform4iARB
#undef glProgramUniform4iARB
#endif
#define glProgramUniform4iARB glProgramUniform4i

#ifdef glProgramUniform4ivARB
#undef glProgramUniform4ivARB
#endif
#define glProgramUniform4ivARB glProgramUniform4iv

#ifdef glProgramUniform4fARB
#undef glProgramUniform4fARB
#endif
#define glProgramUniform4fARB glProgramUniform4f

#ifdef glProgramUniform4fvARB
#undef glProgramUniform4fvARB
#endif
#define glProgramUniform4fvARB glProgramUniform4fv

#ifdef glProgramUniform4dARB
#undef glProgramUniform4dARB
#endif
#define glProgramUniform4dARB glProgramUniform4d

#ifdef glProgramUniform4dvARB
#undef glProgramUniform4dvARB
#endif
#define glProgramUniform4dvARB glProgramUniform4dv

#ifdef glProgramUniform4uiARB
#undef glProgramUniform4uiARB
#endif
#define glProgramUniform4uiARB glProgramUniform4ui

#ifdef glProgramUniform4uivARB
#undef glProgramUniform4uivARB
#endif
#define glProgramUniform4uivARB glProgramUniform4uiv

#ifdef glProgramUniformMatrix2fvARB
#undef glProgramUniformMatrix2fvARB
#endif
#define glProgramUniformMatrix2fvARB glProgramUniformMatrix2fv

#ifdef glProgramUniformMatrix3fvARB
#undef glProgramUniformMatrix3fvARB
#endif
#define glProgramUniformMatrix3fvARB glProgramUniformMatrix3fv

#ifdef glProgramUniformMatrix4fvARB
#undef glProgramUniformMatrix4fvARB
#endif
#define glProgramUniformMatrix4fvARB glProgramUniformMatrix4fv

#ifdef glProgramUniformMatrix2dvARB
#undef glProgramUniformMatrix2dvARB
#endif
#define glProgramUniformMatrix2dvARB glProgramUniformMatrix2dv

#ifdef glProgramUniformMatrix3dvARB
#undef glProgramUniformMatrix3dvARB
#endif
#define glProgramUniformMatrix3dvARB glProgramUniformMatrix3dv

#ifdef glProgramUniformMatrix4dvARB
#undef glProgramUniformMatrix4dvARB
#endif
#define glProgramUniformMatrix4dvARB glProgramUniformMatrix4dv

#ifdef glProgramUniformMatrix2x3fvARB
#undef glProgramUniformMatrix2x3fvARB
#endif
#define glProgramUniformMatrix2x3fvARB glProgramUniformMatrix2x3fv

#ifdef glProgramUniformMatrix3x2fvARB
#undef glProgramUniformMatrix3x2fvARB
#endif
#define glProgramUniformMatrix3x2fvARB glProgramUniformMatrix3x2fv

#ifdef glProgramUniformMatrix2x4fvARB
#undef glProgramUniformMatrix2x4fvARB
#endif
#define glProgramUniformMatrix2x4fvARB glProgramUniformMatrix2x4fv

#ifdef glProgramUniformMatrix4x2fvARB
#undef glProgramUniformMatrix4x2fvARB
#endif
#define glProgramUniformMatrix4x2fvARB glProgramUniformMatrix4x2fv

#ifdef glProgramUniformMatrix3x4fvARB
#undef glProgramUniformMatrix3x4fvARB
#endif
#define glProgramUniformMatrix3x4fvARB glProgramUniformMatrix3x4fv

#ifdef glProgramUniformMatrix4x3fvARB
#undef glProgramUniformMatrix4x3fvARB
#endif
#define glProgramUniformMatrix4x3fvARB glProgramUniformMatrix4x3fv

#ifdef glProgramUniformMatrix2x3dvARB
#undef glProgramUniformMatrix2x3dvARB
#endif
#define glProgramUniformMatrix2x3dvARB glProgramUniformMatrix2x3dv

#ifdef glProgramUniformMatrix3x2dvARB
#undef glProgramUniformMatrix3x2dvARB
#endif
#define glProgramUniformMatrix3x2dvARB glProgramUniformMatrix3x2dv

#ifdef glProgramUniformMatrix2x4dvARB
#undef glProgramUniformMatrix2x4dvARB
#endif
#define glProgramUniformMatrix2x4dvARB glProgramUniformMatrix2x4dv

#ifdef glProgramUniformMatrix4x2dvARB
#undef glProgramUniformMatrix4x2dvARB
#endif
#define glProgramUniformMatrix4x2dvARB glProgramUniformMatrix4x2dv

#ifdef glProgramUniformMatrix3x4dvARB
#undef glProgramUniformMatrix3x4dvARB
#endif
#define glProgramUniformMatrix3x4dvARB glProgramUniformMatrix3x4dv

#ifdef glProgramUniformMatrix4x3dvARB
#undef glProgramUniformMatrix4x3dvARB
#endif
#define glProgramUniformMatrix4x3dvARB glProgramUniformMatrix4x3dv

#ifdef glValidateProgramPipelineARB
#undef glValidateProgramPipelineARB
#endif
#define glValidateProgramPipelineARB glValidateProgramPipeline

#ifdef glGetProgramPipelineInfoLogARB
#undef glGetProgramPipelineInfoLogARB
#endif
#define glGetProgramPipelineInfoLogARB glGetProgramPipelineInfoLog

// GL_EXT_provoking_vertex -> Core (GL 3.2+)
#ifdef glProvokingVertexEXT
#undef glProvokingVertexEXT
#endif
#define glProvokingVertexEXT glProvokingVertex

// GL_ARB_provoking_vertex -> Core (GL 3.2+)
#ifdef glProvokingVertexARB
#undef glProvokingVertexARB
#endif
#define glProvokingVertexARB glProvokingVertex

#endif // USE_GLAD
