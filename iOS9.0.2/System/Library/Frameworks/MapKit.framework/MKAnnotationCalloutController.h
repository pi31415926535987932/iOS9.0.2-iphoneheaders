/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationCalloutControllerDelegate;
#import <MapKit/MapKit-Structs.h>
@class MKAnnotationView;

@interface MKAnnotationCalloutController : NSObject {

	id<MKAnnotationCalloutControllerDelegate> _delegate;
	MKAnnotationView* _annotationView;
	SCD_Struct_MK14 _mapDisplayStyle;

}

@property (assign,nonatomic,__weak) id<MKAnnotationCalloutControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKAnnotationView * annotationView;                                      //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK14 mapDisplayStyle;                                        //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
-(void)showCalloutForAnnotationView:(id)arg1 animated:(char)arg2 scrollToFit:(char)arg3 avoid:(CGRect)arg4 ;
-(void)hideCalloutAnimated:(char)arg1 ;
-(CGRect)_visibleCenteringRectInView:(id)arg1 ;
-(void)_updateCallout;
-(SCD_Struct_MK14)mapDisplayStyle;
-(void)setMapDisplayStyle:(SCD_Struct_MK14)arg1 ;
-(float)defaultCalloutHeight;
-(void)_setRightAccessoryView:(id)arg1 animated:(char)arg2 ;
-(char)calloutContainsPoint:(CGPoint)arg1 ;
-(void)_setLeftAccessoryView:(id)arg1 animated:(char)arg2 ;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(void)_removeAccessoryTargetForView:(id)arg1 ;
-(char)_isShowingCallout;
-(void)_updateCalloutAnimated:(char)arg1 ;
-(id)_subtitle;
-(void)_setSubtitle:(id)arg1 animated:(char)arg2 ;
-(void)_calloutAccessoryControlTapped:(id)arg1 ;
-(char)isCalloutExpanded;
-(MKAnnotationView *)annotationView;
-(void)_removeAccessoryTargets;
-(void)_setDetailAccessoryView:(id)arg1 animated:(char)arg2 ;
-(void)_addAccessoryTargetForView:(id)arg1 ;
-(void)setDelegate:(id<MKAnnotationCalloutControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MKAnnotationCalloutControllerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setTitle:(id)arg1 ;
@end

