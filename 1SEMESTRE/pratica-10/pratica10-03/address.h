struct address {
    char *line;
    int number;
    int zipcode;
};

struct address * create_address(const char * input);

void free_address(struct address * addr);