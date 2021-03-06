#ifndef _BEZCTX_INTF_H
#define _BEZCTX_INTF_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _bezctx bezctx;

bezctx *
new_bezctx(void);

void
bezctx_moveto(void *_bc, double x, double y, int is_open);

void
bezctx_lineto(void *_bc, double x, double y);

void
bezctx_quadto(void *_bc, double x1, double y1, double x2, double y2);

void
bezctx_curveto(void *_bc, double x1, double y1, double x2, double y2,
	       double x3, double y3);

void
bezctx_mark_knot(void *_bc, int knot_idx);

#ifdef __cplusplus
}
#endif
#endif
