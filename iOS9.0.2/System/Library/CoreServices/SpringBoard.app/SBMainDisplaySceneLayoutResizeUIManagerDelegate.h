/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBMainDisplaySceneLayoutResizeUIManagerDelegate <NSObject>
@required
-(id)resizeUIManager:(id)arg1 cachedSceneSnapshotViewForLayoutElementViewController:(id)arg2;
-(void)resizeUIManager:(id)arg1 didCreateSceneSnapshotView:(id)arg2 forLayoutElementViewController:(id)arg3;
-(id)resizeUIManager:(id)arg1 cachedResizingPlaceholderViewForLayoutElementViewController:(id)arg2;
-(void)resizeUIManager:(id)arg1 didCreateResizingPlacholderView:(id)arg2 forLayoutElementViewController:(id)arg3;
-(void)resizeUIManager:(id)arg1 willChangeToState:(unsigned)arg2;
-(void)resizeUIManager:(id)arg1 willChangeDisplayModeOfAppController:(id)arg2 toDisplayMode:(int)arg3;

@end
