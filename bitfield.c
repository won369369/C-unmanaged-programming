struct BitField {
    unsigned int is_keyword : 1;
    unsigned int is_extern  : 1;
    unsigned int is_static  : 1;
};
struct BitField bf;
bf.is_keyword = 1;
bf.is_extern = 0;
bf.is_static = 1;
