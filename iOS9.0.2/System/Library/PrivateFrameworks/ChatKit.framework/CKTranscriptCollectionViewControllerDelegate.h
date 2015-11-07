/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKTranscriptCollectionViewControllerDelegate <NSObject>
@required
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1;
-(char)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
-(void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(CGSize)arg2;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;

@end
