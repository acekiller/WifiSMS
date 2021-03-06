/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, NSTimer, NSDate;



@interface PLCameraElapsedTimeView : UIImageView 
{
    UILabel *_hours;
    UILabel *_minutes;
    UILabel *_seconds;
    NSTimer *_timer;
    NSDate *_startTime;
    BOOL _watchingOrientationChanges;
    BOOL _animateTimeView;
    NSInteger _orientation;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_update:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)willMoveToSuperview:(id)arg1;
- (void)_startWatchingDeviceOrientationChanges;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)_fadeOutDidComplete;
- (void)_setDeviceOrientation:(NSInteger)arg1 animated:(BOOL)arg2;

@end
