/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKLibraryPreviewPresenting.h>

@class UIPreviewPresentationController, BKAssetPresentingViewController, BKLibraryPreviewCoverWorker, NSString;

@interface BKLibraryPreviewCoverPresenter : NSObject <BKLibraryPreviewPresenting> {

	char _willDownload;
	UIPreviewPresentationController* _previewPresentationController;
	BKAssetPresentingViewController* _assetPresentingViewController;
	BKLibraryPreviewCoverWorker* _worker;

}

@property (nonatomic,retain) BKAssetPresentingViewController * assetPresentingViewController;                     //@synthesize assetPresentingViewController=_assetPresentingViewController - In the implementation block
@property (nonatomic,retain) BKLibraryPreviewCoverWorker * worker;                                                //@synthesize worker=_worker - In the implementation block
@property (assign,nonatomic) char willDownload;                                                                   //@synthesize willDownload=_willDownload - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIPreviewPresentationController * previewPresentationController;              //@synthesize previewPresentationController=_previewPresentationController - In the implementation block
+(id)previewPresenterForBook:(id)arg1 originatingViewController:(id)arg2 ;
-(void)setPreviewPresentationController:(UIPreviewPresentationController *)arg1 ;
-(id)initWithBook:(id)arg1 originatingViewController:(id)arg2 ;
-(void)setWorker:(BKLibraryPreviewCoverWorker *)arg1 ;
-(BKLibraryPreviewCoverWorker *)worker;
-(char)willDownload;
-(void)setAssetPresentingViewController:(BKAssetPresentingViewController *)arg1 ;
-(BKAssetPresentingViewController *)assetPresentingViewController;
-(UIPreviewPresentationController *)previewPresentationController;
-(void)setWillDownload:(char)arg1 ;
-(id)committedViewControllerForPreviewViewController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
@end
