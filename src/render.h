typedef struct
{
    vec pos;
    vec scale;
}transform;

mat4 get_model(transform transform)
{
    mat4 pos = translate_mat4(transform.pos);
    return pos;
}

typedef struct
{
    enum
    {
        POSITION_VB,
        TEXCOORD_VB,
        INDICES_VB,

        NUM_BUFFERS
    };
    GLuint VAO;
    GLuint VBO[NUM_BUFFERS];
}mesh;

typedef struct
{
    enum
    {
        TRANSFORM_U,
        PR_U,

        NUM_UNIFORMS
    };
    GLuint program;
    GLuint uniforms[NUM_UNIFORMS];
}shader;

typedef unsigned int texture;

typedef struct
{
    transform transform;
    mesh mesh;
    texture texture;
}sprite;

typedef struct
{
    shader shader;
    camera camera;
}context;
