/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPReportComposerInitialMapPickingController.h>

@class RAPAddNewPlaceQuestion;

@interface RAPReportComposerAddPlaceController : RAPReportComposerInitialMapPickingController {

	RAPAddNewPlaceQuestion* _question;

}

@property (nonatomic,readonly) RAPAddNewPlaceQuestion * question;              //@synthesize question=_question - In the implementation block
-(id)newInitialMapFeaturePickerWithSelection:(/*^block*/id)arg1 ;
-(RAPAddNewPlaceQuestion *)question;
-(void)mapPickerDidCommit:(id)arg1 ;
-(id)initWithOwner:(id)arg1 report:(id)arg2 question:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_segueToEditor;
-(void)present;
@end

