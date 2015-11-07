/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKEventOccurrenceInfo, EKEvent, EKCalendarEventInvitationNotification, NSDictionary;

@interface InboxRepliedSectionItem : NSObject {

	EKEventOccurrenceInfo* _occurrenceInfo;
	EKEvent* _event;
	EKCalendarEventInvitationNotification* _notification;
	NSDictionary* _cellFrameDictionary;

}

@property (nonatomic,retain) EKEventOccurrenceInfo * occurrenceInfo;                            //@synthesize occurrenceInfo=_occurrenceInfo - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                   //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) EKCalendarEventInvitationNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) NSDictionary * cellFrameDictionary;                                //@synthesize cellFrameDictionary=_cellFrameDictionary - In the implementation block
-(NSDictionary *)cellFrameDictionary;
-(void)setCellFrameDictionary:(NSDictionary *)arg1 ;
-(EKEventOccurrenceInfo *)occurrenceInfo;
-(id)initWithOccurrenceInfo:(id)arg1 ;
-(void)setOccurrenceInfo:(EKEventOccurrenceInfo *)arg1 ;
-(id)description;
-(EKCalendarEventInvitationNotification *)notification;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)setNotification:(EKCalendarEventInvitationNotification *)arg1 ;
@end
