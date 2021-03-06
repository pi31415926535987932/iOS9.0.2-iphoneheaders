/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/Siri.migrator/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface SiriMigrator : DataClassMigrator
-(void)_performOutputVoiceMigration;
-(void)_performVoiceServicesLanguageMigration;
-(void)_performBootstrapSpeechIdMigration;
-(void)_performLastUseMigration;
-(void)_performDictationMigration;
-(void)_performAudioFeedbackMigration;
-(void)_cleanupBundleCaches;
-(void)_removeTokenDomain;
-(void)_performInteralToBackedUpMigration;
-(void)_performLoggingMigration;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(char)performMigration;
@end

