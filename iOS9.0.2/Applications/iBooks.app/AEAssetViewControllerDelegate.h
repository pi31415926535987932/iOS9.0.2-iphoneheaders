/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AEAssetViewControllerDelegate <NSObject>
@optional
-(void)assetViewController:(id)arg1 fadeStatusBar:(char)arg2;

@required
-(char)assetViewController:(id)arg1 requestClose:(char)arg2 withErrorBlock:(/*^block*/id)arg3;
-(void)assetViewController:(id)arg1 willOpen:(char)arg2;
-(void)assetViewController:(id)arg1 willClose:(char)arg2;
-(char)assetViewController:(id)arg1 requestOpenURL:(id)arg2;
-(char)assetViewController:(id)arg1 requestClose:(char)arg2;
-(char)assetViewController:(id)arg1 requestJumpToStore:(char)arg2;
-(char)assetViewControllerRequestToBuy:(id)arg1;
-(void)assetViewController:(id)arg1 handleFamilyChangeError:(id)arg2;
-(void)assetViewControllerSignificantReadingLocationChange:(id)arg1;

@end
