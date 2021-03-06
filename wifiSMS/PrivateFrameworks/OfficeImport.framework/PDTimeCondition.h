/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimationTargetElement;



@interface PDTimeCondition : NSObject 
{
    BOOL mHasDelay;
    NSInteger mDelay;
    NSInteger mTriggerEvent;
    PDAnimationTargetElement *mTgtElement;
}


- (id)init;
- (void)dealloc;
- (BOOL)hasDelay;
- (NSInteger)delay;
- (void)setDelay:(NSInteger)arg1;
- (NSInteger)triggerEvent;
- (void)setTriggerEvent:(NSInteger)arg1;
- (id)tgtElement;
- (void)setTgtElement:(id)arg1;

@end
