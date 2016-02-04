#ifndef SAILING_H
#define SAILING_H

struct boat {
    char *name;
};

struct boat *sailing_boat_init();

void sailing_boat_free(struct boat *boat);

char *sailing_boat_get_name(struct boat *boat);

#endif
