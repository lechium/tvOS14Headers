/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface CalDAVDBChangeTrackingHelper : NSObject {

	NSString* _clientIdentifier;
	int _initialSequenceNumber;
	NSMutableDictionary* _savedChanges;

}
-(id)initWithClientIdentifier:(id)arg1 ;
-(BOOL)clearUnconsumedAndUnsavedChanges;
-(void)saveChange:(int)arg1 forEntityType:(int)arg2 ;
@end
