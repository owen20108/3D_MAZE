fndef HEADER_H
#define HEADER_H

// Define color_t if not already defined
typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} color_t;

// Function prototype for drawing a pixel
void drawPixel(int x, int y, color_t color);

#endif /* HEADER_H */

