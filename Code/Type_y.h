#ifndef VECTOR_TYPE_Y_H
    #define VECTOR_TYPE_Y_H



struct Type_y
{
    VersorType
        value;
};



constexpr Type_y operator ""y(uint64_t value)
{
    return Type_y{static_cast<decltype(Type_y::value)>(value)};
}



#endif // VECTOR_TYPE_Y_H
