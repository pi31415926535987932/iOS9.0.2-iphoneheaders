/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIDatePickerMode.h>

@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode {

	float _componentWidth;

}
+(int)datePickerMode;
+(unsigned)extractableCalendarUnits;
-(float)rowHeight;
-(id)font;
-(char)isTimeIntervalMode;
-(void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2 ;
-(int)hourForRow:(int)arg1 ;
-(char)areValidDateComponents:(id)arg1 comparingUnits:(int)arg2 ;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(int)arg2 ;
-(void)resetComponentWidths;
-(float)widthForCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(id)localizedFormatString;
-(int)numberOfRowsForCalendarUnit:(unsigned)arg1 ;
-(unsigned)nextUnitSmallerThanUnit:(unsigned)arg1 ;
-(unsigned)nextUnitLargerThanUnit:(unsigned)arg1 ;
-(NSRange)rangeForCalendarUnit:(unsigned)arg1 ;
-(int)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned)arg3 ;
-(int)titleAlignmentForCalendarUnit:(unsigned)arg1 ;
-(id)titleForRow:(int)arg1 inComponent:(int)arg2 ;
-(char)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned)arg3 ;
@end
