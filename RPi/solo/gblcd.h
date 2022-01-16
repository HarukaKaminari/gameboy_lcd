
#define GBLCD_WIDTH	160
#define GBLCD_HEIGHT	144
#define GBLCD_BUFSIZE	((GBLCD_WIDTH * GBLCD_HEIGHT) / 4)

int gblcd_init(const char *fbdev);
void gblcd_finish();
void gblcd_update(uint8_t *buffer);
