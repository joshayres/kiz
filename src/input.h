bool keys[350];

typedef struct
{
    enum
    {
        HORIZ_AXIS,

        NUM_AXIS
    };
    float axis[NUM_AXIS];
}input;

void update_input(input *input)
{
    if(keys[GLFW_KEY_D])
    {
        input->axis[HORIZ_AXIS] = 1.0f;
    }
    else if(keys[GLFW_KEY_A])
    {
        input->axis[HORIZ_AXIS] = -1.0f;
    }
    else
    {
        input->axis[HORIZ_AXIS] = 0.0f;
    }
}