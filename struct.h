#ifndef GEMSTONE
#define GEMSTONE

struct gemstone {
    char name[256];
    int id;
    char classification[256];
    long value;

};

struct gemstone * new_gemstone(int i, char *n, char *classification, long value);
void increase_value(struct gemstone *gemstone, long increase_by);
void print_gemstone(struct gemstone *gemstone);

#endif