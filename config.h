#ifndef V4L2_PIX_FMT_SUNXI_TILED_NV12
#define V4L2_PIX_FMT_SUNXI_TILED_NV12 v4l2_fourcc('S', 'U', 'N', 'X')
#endif

#ifndef DRM_FORMAT_MOD_ALLWINNER_TILED
#define DRM_FORMAT_MOD_ALLWINNER_TILED ~0
#endif

#ifndef DRM_IOCTL_SUN4I_GEM_CREATE_TILED 
#define DRM_IOCTL_SUN4I_GEM_CREATE_TILED ~0
#include <asm/types.h>
struct drm_sun4i_gem_create_tiled {
	__u32 height;
	__u32 width;
	__u32 format;
	/* handle, offsets, pitches, size will be returned */
	__u32 handle;
	__u32 pitches[4];
	__u32 offsets[4];
	__u64 size;
};
#else
#include <sun4i_drm.h>
#endif
