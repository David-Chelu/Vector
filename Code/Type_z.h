#ifndef VECTOR_TYPE_Z_H
    #define VECTOR_TYPE_Z_H



struct Type_z
{
    VersorType
        value;
};



constexpr Type_z operator ""z(uint64_t value)
{
    return Type_z{static_cast<decltype(Type_z::value)>(value)};
}



#endif // VECTOR_TYPE_Z_H
