/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WeatherPreferencesPersistence <NSObject>
@required
-(id)arrayForKey:(id)arg1;
-(id)objectForKey:(id)arg1;
-(void)removeObjectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;
-(void)synchronize;
-(char)boolForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(void)setBool:(char)arg1 forKey:(id)arg2;
-(id)dictionaryForKey:(id)arg1;

@end

