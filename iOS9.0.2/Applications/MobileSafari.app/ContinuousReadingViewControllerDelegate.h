/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ContinuousReadingViewControllerDelegate <NSObject>
@required
-(void)continuousReadingViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
-(void)continuousReadingViewControllerWillCommitToLoadNextItem:(id)arg1;
-(void)continuousReadingViewControllerCommitToLoadPreviousItem:(id)arg1;
-(void)continuousReadingViewController:(id)arg1 didCommitToLoadItem:(id)arg2;
-(float)continuousReadingViewControllerNextWebViewLandingOffset:(id)arg1 includeBottomBar:(char)arg2;

@end

