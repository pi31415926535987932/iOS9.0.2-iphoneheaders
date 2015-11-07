/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICSWriting.h>

@class NSMutableDictionary, NSMutableArray, NSString, NSArray, ICSDate, ICSDuration, ICSUserAddress, ICSTrigger, NSURL, ICSStructuredLocation;

@interface ICSComponent : NSObject <ICSWriting> {

	NSMutableDictionary* _properties;
	NSMutableArray* _components;
	NSString* _unrecognizedComponentName;

}

@property (retain) NSArray * attach; 
@property (retain) NSArray * attendee; 
@property (assign) int classification; 
@property (retain) ICSDate * created; 
@property (retain) NSString * description; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDate * dtstart; 
@property (readonly) char isAllDay; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDuration * duration; 
@property (retain) NSArray * exdate; 
@property (retain) NSArray * exrule; 
@property (retain) ICSDate * last_modified; 
@property (retain) NSString * location; 
@property (retain) ICSUserAddress * organizer; 
@property (retain) NSArray * rdate; 
@property (retain) ICSDate * recurrence_id; 
@property (retain) NSArray * relatedTo; 
@property (retain) NSArray * rrule; 
@property (assign) unsigned sequence; 
@property (assign) int status; 
@property (retain) NSString * statusString; 
@property (retain) NSString * summary; 
@property (retain) ICSTrigger * trigger; 
@property (retain) NSString * uid; 
@property (retain) NSURL * url; 
@property (assign) unsigned priority; 
@property (retain) NSString * unrecognizedComponentName; 
@property (assign) int x_calendarserver_access; 
@property (retain) NSString * x_apple_dropbox; 
@property (retain) NSString * x_apple_ews_changekey; 
@property (retain) NSString * x_apple_ews_itemid; 
@property (assign) char x_apple_ews_needsserverconfirmation; 
@property (retain) NSString * x_apple_ews_permission; 
@property (assign) char x_apple_ignore_on_restore; 
@property (retain) NSString * x_apple_etag; 
@property (retain) NSString * x_apple_scheduletag; 
@property (retain) NSString * x_apple_serverFilename; 
@property (assign) char x_apple_suggestionInfoChangesAcknowledged; 
@property (assign) unsigned x_apple_suggestionInfoChangedFields; 
@property (retain) NSString * x_apple_suggestionInfoOpaqueKey; 
@property (assign) ICSDate * x_apple_suggestionInfoTimestamp; 
@property (retain) NSString * x_apple_suggestionInfoUniqueKey; 
@property (retain) ICSStructuredLocation * x_apple_structured_location; 
@property (retain) NSArray * conferences; 
@property (retain) NSMutableArray * components;                                      //@synthesize components=_components - In the implementation block
+(id)name;
+(id)makeUID;
+(unsigned)relationshipTypeFromString:(id)arg1 ;
+(id)stringFromRelationshipType:(unsigned)arg1 ;
+(id)stringFromStatus:(int)arg1 ;
+(int)statusFromString:(id)arg1 ;
+(id)inheritanceKeywords;
-(char)isAllDay;
-(ICSUserAddress *)organizer;
-(void)setStatusString:(NSString *)arg1 ;
-(void)setSequence:(unsigned)arg1 ;
-(unsigned)sequence;
-(void)setSummary:(NSString *)arg1 ;
-(id)init;
-(NSString *)description;
-(id)debugDescription;
-(ICSDuration *)duration;
-(NSURL *)url;
-(void)setDuration:(ICSDuration *)arg1 ;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSArray *)attach;
-(NSString *)location;
-(NSString *)uid;
-(void)setLocation:(NSString *)arg1 ;
-(id)properties;
-(NSMutableArray *)components;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setDtstamp:(ICSDate *)arg1 ;
-(ICSDate *)dtstamp;
-(void)setDtend:(ICSDate *)arg1 ;
-(void)setDtstart:(ICSDate *)arg1 ;
-(id)ICSStringWithOptions:(unsigned)arg1 ;
-(NSArray *)attendee;
-(ICSDate *)last_modified;
-(void)setX_calendarserver_access:(int)arg1 ;
-(ICSStructuredLocation *)x_apple_structured_location;
-(id)x_apple_travel_start;
-(id)propertiesForName:(id)arg1 ;
-(void)removePropertiesForName:(id)arg1 ;
-(NSArray *)relatedTo;
-(NSArray *)exdate;
-(int)x_calendarserver_access;
-(void)setRrule:(NSArray *)arg1 ;
-(void)setAttach:(NSArray *)arg1 ;
-(void)setRelatedTo:(NSArray *)arg1 ;
-(id)x_apple_travel_duration;
-(id)x_apple_travel_advisory_behavior;
-(NSString *)x_apple_suggestionInfoOpaqueKey;
-(NSString *)x_apple_suggestionInfoUniqueKey;
-(unsigned)x_apple_suggestionInfoChangedFields;
-(char)x_apple_suggestionInfoChangesAcknowledged;
-(void)setX_apple_travel_duration:(id)arg1 ;
-(void)setX_apple_travel_advisory_behavior:(id)arg1 ;
-(void)setX_apple_suggestionInfoOpaqueKey:(NSString *)arg1 ;
-(void)setX_apple_suggestionInfoUniqueKey:(NSString *)arg1 ;
-(void)setX_apple_suggestionInfoChangesAcknowledged:(char)arg1 ;
-(void)setX_apple_suggestionInfoChangedFields:(unsigned)arg1 ;
-(void)setProperties:(id)arg1 forName:(id)arg2 ;
-(void)setX_apple_travel_start:(id)arg1 ;
-(void)setX_apple_structured_location:(ICSStructuredLocation *)arg1 ;
-(char)validate:(id*)arg1 ;
-(void)setCreated:(ICSDate *)arg1 ;
-(ICSDate *)created;
-(ICSDate *)recurrence_id;
-(ICSDate *)dtend;
-(ICSDate *)dtstart;
-(void)setPropertyValue:(id)arg1 type:(int)arg2 forName:(id)arg3 ;
-(void)setLast_modified:(ICSDate *)arg1 ;
-(NSArray *)rrule;
-(void)setRecurrence_id:(ICSDate *)arg1 ;
-(void)setExdate:(NSArray *)arg1 ;
-(void)setOrganizer:(ICSUserAddress *)arg1 ;
-(void)setForcedAllDay:(char)arg1 ;
-(void)setAttendee:(NSArray *)arg1 ;
-(void)setProperty:(id)arg1 forName:(id)arg2 ;
-(void)setUid:(NSString *)arg1 ;
-(void)setClassification:(int)arg1 ;
-(int)classification;
-(void)addComponent:(id)arg1 ;
-(void)setComponents:(NSMutableArray *)arg1 ;
-(NSString *)statusString;
-(id)allProperties;
-(NSString *)summary;
-(ICSTrigger *)trigger;
-(void)setTrigger:(ICSTrigger *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(NSString *)unrecognizedComponentName;
-(char)ignorePropertyWithName:(id)arg1 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(id)parametersToObscure;
-(char)shouldObscureValue;
-(void)setUnrecognizedComponentName:(NSString *)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(void)setPropertyValue:(id)arg1 forName:(id)arg2 ;
-(void)addProperty:(id)arg1 withValue:(id)arg2 ;
-(char)forcedAllDay;
-(void)setExrule:(NSArray *)arg1 ;
-(NSArray *)exrule;
-(void)setRdate:(NSArray *)arg1 ;
-(NSArray *)rdate;
-(NSString *)x_apple_dropbox;
-(void)setX_apple_dropbox:(NSString *)arg1 ;
-(NSString *)x_apple_ews_changekey;
-(void)setX_apple_ews_changekey:(NSString *)arg1 ;
-(NSString *)x_apple_ews_itemid;
-(void)setX_apple_ews_itemid:(NSString *)arg1 ;
-(NSString *)x_apple_ews_permission;
-(void)setX_apple_ews_permission:(NSString *)arg1 ;
-(char)x_apple_ews_needsserverconfirmation;
-(void)setX_apple_ews_needsserverconfirmation:(char)arg1 ;
-(void)setX_apple_ignore_on_restore:(char)arg1 ;
-(char)x_apple_ignore_on_restore;
-(void)setX_apple_etag:(NSString *)arg1 ;
-(NSString *)x_apple_etag;
-(void)setX_apple_scheduletag:(NSString *)arg1 ;
-(NSString *)x_apple_scheduletag;
-(void)setX_apple_serverFilename:(NSString *)arg1 ;
-(NSString *)x_apple_serverFilename;
-(void)setConferences:(NSArray *)arg1 ;
-(NSArray *)conferences;
-(void)setX_apple_end_location:(id)arg1 ;
-(id)x_apple_end_location;
-(ICSDate *)x_apple_suggestionInfoTimestamp;
-(void)setX_apple_suggestionInfoTimestamp:(ICSDate *)arg1 ;
-(void)fixPropertiesInheritance:(id)arg1 ;
-(void)fixComponent;
-(void)fixAlarms;
-(void)fixAttendees;
-(void)fixAttachments;
-(void)fixRelatedTo;
-(void)fixRecurrenceRules;
-(void)fixRecurrenceDates;
-(void)fixExceptionRules;
-(void)fixExceptionDates;
-(void)fixSuggestionInfo;
@end
