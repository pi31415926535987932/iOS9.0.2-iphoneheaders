/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, CADisplayLink;

@interface UIViewHeartbeat : NSObject {

	UIView* _view;
	SEL _selector;
	CADisplayLink* _heartbeat;

}
+(void)startHeartbeatWithView:(id)arg1 selector:(SEL)arg2 inRunLoopMode:(id)arg3 ;
+(void)stopHeartbeatWithView:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(void)_updateDisplayLink:(id)arg1 ;
@end

