/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSettingsConnection.h>

@interface AssistantVoiceSettingsConnection : AFSettingsConnection
+(id)outputLanguageIdentifiers;
-(char)languageHasVoiceSelection:(id)arg1 ;
-(id)getAvailableDialectsForLanguage:(id)arg1 ;
-(id)dialectForLanguageIdentifier:(id)arg1 ;
-(char)languageHasMultipleVoices:(id)arg1 ;
-(void)setOutputVoiceLanguage:(id)arg1 gender:(int)arg2 ;
-(char)languageHasCustomVoice:(id)arg1 ;
-(id)_regionForLanguageIdentifier:(id)arg1 ;
-(id)getAvailableVoicesForLanguage:(id)arg1 ;
@end

