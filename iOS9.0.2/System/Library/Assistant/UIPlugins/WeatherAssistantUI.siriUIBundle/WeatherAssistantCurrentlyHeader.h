/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/WeatherAssistantUI.siriUIBundle/WeatherAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WeatherAssistantUI/WeatherAssistantUI-Structs.h>
#import <SiriUI/SiriUIReusableHeaderView.h>

@class UILabel;

@interface WeatherAssistantCurrentlyHeader : SiriUIReusableHeaderView {

	char _dataIsCelsius;
	UILabel* _detail;
	UILabel* _temperature;
	UILabel* _dayName;
	UILabel* _dayDescription;
	UILabel* _highTemperature;
	UILabel* _lowTemperature;

}

@property (assign,nonatomic) char dataIsCelsius;                       //@synthesize dataIsCelsius=_dataIsCelsius - In the implementation block
@property (nonatomic,readonly) UILabel * detail;                       //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) UILabel * temperature;                  //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,readonly) UILabel * dayName;                      //@synthesize dayName=_dayName - In the implementation block
@property (nonatomic,readonly) UILabel * dayDescription;               //@synthesize dayDescription=_dayDescription - In the implementation block
@property (nonatomic,readonly) UILabel * highTemperature;              //@synthesize highTemperature=_highTemperature - In the implementation block
@property (nonatomic,readonly) UILabel * lowTemperature;               //@synthesize lowTemperature=_lowTemperature - In the implementation block
-(char)dataIsCelsius;
-(UILabel *)dayName;
-(void)setupWeather:(id)arg1 ;
-(void)setDataIsCelsius:(char)arg1 ;
-(UILabel *)dayDescription;
-(UILabel *)detail;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)temperature;
-(UILabel *)highTemperature;
-(UILabel *)lowTemperature;
@end

