/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ABLE/ABLEModelController.h>

@class ABLEBONDirect;

@interface ABLEDirectModelController : ABLEModelController {

	unsigned _currentBON;
	ABLEBONDirect* _directMap;

}

@property (readonly) unsigned currentBON;                    //@synthesize currentBON=_currentBON - In the implementation block
@property (readonly) ABLEBONDirect * directMap;              //@synthesize directMap=_directMap - In the implementation block
-(char)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2 ;
-(unsigned)currentBON;
-(void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(char)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(/*^block*/id)arg5 ;
-(char)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1 ;
-(ABLEBONDirect *)directMap;
-(void)updateConfiguration:(id)arg1 ;
-(id)init;
-(id)currentState;
@end
