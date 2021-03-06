/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor;

@interface SBPieChartSlice : NSObject {

	float _value;
	UIColor* _fillColor;

}

@property (readonly) float value;                             //@synthesize value=_value - In the implementation block
@property (retain,readonly) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
+(id)sliceWithValue:(float)arg1 fillColor:(id)arg2 ;
-(id)initWithValue:(float)arg1 fillColor:(id)arg2 ;
-(void)dealloc;
-(float)value;
-(UIColor *)fillColor;
@end

