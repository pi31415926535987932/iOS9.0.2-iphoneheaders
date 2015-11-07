/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AFUIRequestOptions, NSMapTable;

@interface AFUIRequestTrigger : NSObject {

	AFUIRequestOptions* _options;
	int _state;
	NSMapTable* _observers;

}

@property (nonatomic,readonly) AFUIRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) int state;                                 //@synthesize state=_state - In the implementation block
-(int)state;
-(AFUIRequestOptions *)options;
-(id)initWithRequestOptions:(id)arg1 updateHandle:(/*^block*/id*)arg2 ;
-(void)addTriggerTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTriggerTarget:(id)arg1 ;
-(void)_updateState:(int)arg1 ;
@end
