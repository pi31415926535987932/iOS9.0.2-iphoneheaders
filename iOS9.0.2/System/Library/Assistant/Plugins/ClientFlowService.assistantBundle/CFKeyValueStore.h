/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUserDefaults;

@interface CFKeyValueStore : NSObject {

	NSUserDefaults* _keyValueStore;

}
-(char)setArray:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setBool:(char)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setFloat:(float)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setInteger:(int)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setDouble:(double)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setStringArray:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setURL:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setDictionary:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)removeObjectForKey:(id)arg1 error:(id*)arg2 ;
-(char)invalidKey:(id)arg1 error:(id*)arg2 ;
-(char)invalidKey:(id)arg1 ;
-(char)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)stringArrayForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(id)floatForKey:(id)arg1 ;
-(char)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)urlForKey:(id)arg1 ;
@end
