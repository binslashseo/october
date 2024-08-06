/* please replace the colors from line 96 and further with this. don't override the config! */
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2a282e", /* black   */
  [1] = "#a43b34", /* red     */
  [2] = "#a38d31", /* green   */
  [3] = "#af6430", /* yellow  */
  [4] = "#2f698f", /* blue    */
  [5] = "#a65d66", /* magenta */
  [6] = "#5e8d87", /* cyan    */
  [7] = "#777080", /* white   */

  /* 8 bright colors */
  [8]  = "#3d3741", /* black   */
  [9]  = "#7e2b2b", /* red     */
  [10] = "#83782b", /* green   */
  [11] = "#984925", /* yellow  */
  [12] = "#1b4a72", /* blue    */
  [13] = "#69384f", /* magenta */
  [14] = "#3a8e82", /* cyan    */
  [15] = "#d2cad3", /* white   */

  /* special colors */
  [256] = "#050407", /* background */
  [257] = "#e6e0ee", /* foreground */
};

static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
