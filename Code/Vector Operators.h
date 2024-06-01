#ifndef VECTOR_OPERATORS_H
    #define VECTOR_OPERATORS_H



Vector &operator -=(Vector &v, const Type_x &rvalue)
{
    v.x -= rvalue.value;

    return v;
}

Vector &operator +=(Vector &v, const Type_x &rvalue)
{
    v.x += rvalue.value;

    return v;
}



Vector &operator -=(Vector &v, const Type_y &rvalue)
{
    v.y -= rvalue.value;

    return v;
}

Vector &operator +=(Vector &v, const Type_y &rvalue)
{
    v.y += rvalue.value;

    return v;
}



Vector &operator -=(Vector &v, const Type_z &rvalue)
{
    v.z -= rvalue.value;

    return v;
}

Vector &operator +=(Vector &v, const Type_z &rvalue)
{
    v.z += rvalue.value;

    return v;
}



Vector &operator -=(Vector &v, const Vector &rvalue)
{
    v.x -= rvalue.x;
    v.y -= rvalue.y;
    v.z -= rvalue.z;

    return v;
}

Vector &operator +=(Vector &v, const Vector &rvalue)
{
    v.x += rvalue.x;
    v.y += rvalue.y;
    v.z += rvalue.z;

    return v;
}



#endif // VECTOR_OPERATORS_H
