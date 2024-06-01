#ifndef VECTOR_TYPE_X_H
    #define VECTOR_TYPE_X_H



struct Type_x
{
    VersorType
        value;
};



constexpr Type_x operator ""x(uint64_t value)
{
    return Type_x{static_cast<decltype(Type_x::value)>(value)};
}



#endif // VECTOR_TYPE_X_H
