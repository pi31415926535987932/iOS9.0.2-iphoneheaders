/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBApplicationDataStoreRepository <NSObject>
@property (assign,nonatomic) id<FBApplicationDataStoreRepositoryDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<FBApplicationDataStoreRepositoryDelegate>)delegate;
-(void)objectForKeys:(id)arg1 forAllApplicationsWithResult:(/*^block*/id)arg2;
-(void)flushSynchronously;
-(id)applicationIdentifiersWithState;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2;
-(void)removeAllObjectsForApplication:(id)arg1;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2;
-(void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2;
-(id)keysForApplication:(id)arg1;
-(char)containsKey:(id)arg1 forApplication:(id)arg2;
-(void)beginBatchedUpdate;
-(void)endBatchedUpdate;

@end
