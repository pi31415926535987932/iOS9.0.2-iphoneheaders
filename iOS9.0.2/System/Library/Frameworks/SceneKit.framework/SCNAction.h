/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SCNAction : NSObject <NSCopying, NSSecureCoding> {

	SCNCAction* _caction;

}

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) int timingMode; 
@property (assign,nonatomic) id timingFunction; 
@property (assign,nonatomic) float speed; 
+(id)unhide;
+(id)runBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
+(id)playAudioSource:(id)arg1 waitForCompletion:(char)arg2 ;
+(id)waitForDuration:(double)arg1 withRange:(double)arg2 ;
+(id)waitForDuration:(double)arg1 ;
+(id)actionNamed:(id)arg1 ;
+(id)moveByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 ;
+(id)rotateByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 ;
+(id)rotateToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 ;
+(id)rotateByAngle:(float)arg1 aroundAxis:(SCNVector3)arg2 duration:(double)arg3 ;
+(id)rotateToAxisAngle:(SCNVector4)arg1 duration:(double)arg2 ;
+(id)rotateToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 shortestUnitArc:(char)arg5 ;
+(id)scaleBy:(float)arg1 duration:(double)arg2 ;
+(id)scaleTo:(float)arg1 duration:(double)arg2 ;
+(id)repeatAction:(id)arg1 count:(unsigned)arg2 ;
+(id)repeatActionForever:(id)arg1 ;
+(id)fadeOpacityBy:(float)arg1 duration:(double)arg2 ;
+(id)fadeOpacityTo:(float)arg1 duration:(double)arg2 ;
+(id)customActionWithDuration:(double)arg1 actionBlock:(/*^block*/id)arg2 ;
+(char)editingModeEnabled;
+(void)setEditingModeEnabled:(char)arg1 ;
+(id)moveBy:(SCNVector3)arg1 duration:(double)arg2 ;
+(id)sequence:(id)arg1 ;
+(id)group:(id)arg1 ;
+(id)performSelector:(SEL)arg1 onTarget:(id)arg2 ;
+(id)runBlock:(/*^block*/id)arg1 ;
+(id)runAction:(id)arg1 onChildNodeWithName:(id)arg2 ;
+(id)javaScriptActionWithScript:(id)arg1 duration:(double)arg2 ;
+(id)hide;
+(char)supportsSecureCoding;
+(id)fadeOutWithDuration:(double)arg1 ;
+(id)fadeInWithDuration:(double)arg1 ;
+(id)removeFromParentNode;
+(id)moveTo:(SCNVector3)arg1 duration:(double)arg2 ;
-(char)finished;
-(SCNCAction*)caction;
-(void)setCppAction:(void*)arg1 ;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(double)durationRange;
-(void)setDurationRange:(double)arg1 ;
-(int)timingMode;
-(void)setTimingMode:(int)arg1 ;
-(void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)willResumeWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)timeJumpWithTarget:(id)arg1 timeOffset:(double)arg2 ;
-(float)ratioForTime:(double)arg1 ;
-(void)wasAddedToTarget:(id)arg1 atTime:(double)arg2 ;
-(void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2 ;
-(void)willStartWithTarget:(id)arg1 atTime:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copy;
-(void)setSpeed:(float)arg1 ;
-(double)duration;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(id)timingFunction;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)speed;
-(void)setTimingFunction:(id)arg1 ;
-(id)parameters;
-(void)setKey:(id)arg1 ;
-(void)setFinished:(char)arg1 ;
-(char)isRelative;
-(char)isCustom;
@end
