/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPAVQueueCoordinatorDataSource <NSObject>
@optional
-(void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
-(void)queueCoordinator:(id)arg1 willInsertItem:(id)arg2 afterItem:(id)arg3;
-(void)queueCoordinatorDidChangeItems:(id)arg1;

@required
-(id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;

@end

