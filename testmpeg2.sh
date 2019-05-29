while [ 1 ]; do
./v4l2-request-test -v /dev/video2 -m /dev/media0 -d /dev/dri/card0 -D rockchip -P bbb-happy-mpeg2  -q -f 25
./v4l2-request-test -v /dev/video2 -m /dev/media0 -d /dev/dri/card0 -D rockchip -P bbb-mpeg2 -q -f 25
./v4l2-request-test -v /dev/video2 -m /dev/media0 -d /dev/dri/card0 -D rockchip -P ed-mpeg2  -q -f 25
done
