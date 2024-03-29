/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Source Code Pro:size=16",
	"Source Code Pro:pixelsize=16:antialias=true:autohint=true",
};
static const unsigned int bgalpha = 0xe0;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                      fg         bg            fg        bg        */
	[SchemeNorm]  =   { "#ffffff", "#000000" }, /* #bbbbbb  #222222 */
	[SchemeSel]   =   { "#000000", "#afd787" }, /* #eeeeee  #005577 */
	[SchemeOut]   =   { "#000000", "#000000" }, /* #000000  #00ffff */
};

/* Color Scheme */
/* *.color0: #000000 */
/* *.color2: #d78787 */
/* *.color3: #ffb76d */
/* *.color4: #87afd7 */
/* *.color5: #d7afd7 */
/* *.color6: #afd787 */

static const unsigned int alphas[SchemeLast][2] = {
	/*		              fgalpha	  bgalphga	    */
	[SchemeNorm]  =   { fgalpha, bgalpha },
	[SchemeSel]   =   { fgalpha, bgalpha },
	[SchemeOut]   =   { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
