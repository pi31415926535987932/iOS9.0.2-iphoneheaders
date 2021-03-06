/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBApplicationIcon.h>
#import <SpringBoard/SBDateTimeOverrideObserver.h>

@class NSString;

@interface SBCalendarApplicationIcon : SBApplicationIcon <SBDateTimeOverrideObserver>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)countriesRequiringBlackDayOfWeek;
-(id)getUnmaskedIconImage:(int)arg1 ;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(void)_startListeningForSignificantTimeChanges;
-(void)_stopListeningForSignificantTimeChanges;
-(void)_drawIconIntoCurrentContextWithImageSize:(CGSize)arg1 iconBase:(id)arg2 ;
-(id)_compositedIconImageForFormat:(int)arg1 withBaseImageProvider:(/*^block*/id)arg2 ;
-(char)isBlackDayOfWeekRequiredForLocale:(id)arg1 ;
-(id)numberFont;
-(id)colorForDayOfWeek;
-(id)generateIconImage:(int)arg1 ;
-(void)localeChanged;
-(void)dealloc;
-(id)initWithApplication:(id)arg1 ;
@end

