/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/IMCloudSyncTransactionProcessing.h>

@class NSArray, NSMutableDictionary, NSString;

@interface IMCloudSyncKeyValueStoreProcessor : NSObject <IMCloudSyncTransactionProcessing> {

	/*^block*/id _retryBlock;
	/*^block*/id _completionBlock;
	NSArray* _keys;
	NSMutableDictionary* _values;
	NSMutableDictionary* _versions;

}

@property (nonatomic,copy) id retryBlock;                                 //@synthesize retryBlock=_retryBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                            //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSArray * keys;                              //@synthesize keys=_keys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * values;                //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * versions;              //@synthesize versions=_versions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)versionForGetTransaction:(id)arg1 key:(id)arg2 ;
-(id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id*)arg3 ;
-(void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 version:(id)arg4 mismatch:(char)arg5 finishedBlock:(/*^block*/id)arg6 ;
-(void)transactionDidFinish:(id)arg1 success:(char)arg2 error:(id)arg3 ;
-(void)setRetryBlock:(id)arg1 ;
-(id)retryBlock;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)values;
-(NSArray *)keys;
-(void)setKeys:(NSArray *)arg1 ;
-(NSMutableDictionary *)versions;
-(void)setVersions:(NSMutableDictionary *)arg1 ;
@end

