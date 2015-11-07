/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class WeatherPreferences, NSLocale, NSDictionary;

@interface WeatherWindSpeedFormatter : NSFormatter {

	WeatherPreferences* _preferences;
	NSLocale* _locale;
	NSDictionary* _directionSubstringAttributes;

}

@property (retain) WeatherPreferences * preferences;                         //@synthesize preferences=_preferences - In the implementation block
@property (retain) NSLocale * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (retain) NSDictionary * directionSubstringAttributes;              //@synthesize directionSubstringAttributes=_directionSubstringAttributes - In the implementation block
+(id)convenienceFormatter;
-(id)init;
-(void)setPreferences:(WeatherPreferences *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(WeatherPreferences *)preferences;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)formattedStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(float)speedByConvertingToUserUnit:(float)arg1 ;
-(id)templateStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(id)stringForWindDirection:(float)arg1 ;
-(NSDictionary *)directionSubstringAttributes;
-(id)stringForWindSpeed:(float)arg1 ;
-(id)fallbackStringForWindSpeed:(float)arg1 ;
-(int)windSpeedUnit;
-(id)fallbackUnitString;
-(id)attributedFormattedStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(id)speedStringByConvertingToUserUnits:(float)arg1 ;
-(void)setDirectionSubstringAttributes:(NSDictionary *)arg1 ;
@end
