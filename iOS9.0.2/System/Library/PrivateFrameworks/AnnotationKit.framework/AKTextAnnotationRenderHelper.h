/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKTextAnnotationRenderHelper : NSObject
+(void)renderAnnotationText:(id)arg1 intoContext:(CGContextRef)arg2 isForScreen:(char)arg3 pageControllerOrNil:(id)arg4 ;
+(CGSize)unconstrainedSizeForText:(id)arg1 ;
+(id)_sharedLayoutManager;
+(char)_hitTestPoint:(CGPoint)arg1 againstActualTextForAnnotation:(id)arg2 onPageController:(id)arg3 contextForVisualDebugging:(CGContextRef)arg4 ;
+(void)getAnnotationRectangle:(CGRect*)arg1 textBounds:(CGRect*)arg2 containerSize:(CGSize*)arg3 exclusionPaths:(id*)arg4 isTextClipped:(char*)arg5 forAnnotation:(id)arg6 onPageController:(id)arg7 orInContext:(CGContextRef)arg8 shouldAlignToPixels:(char)arg9 optionalText:(id)arg10 optionalCenter:(CGPoint)arg11 optionalProposedRectangle:(CGRect)arg12 ;
+(char)hitTestPoint:(CGPoint)arg1 againstActualTextForAnnotation:(id)arg2 onPageController:(id)arg3 ;
@end
