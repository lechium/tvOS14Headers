/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNEnumeratorRefillStrategy.h>

@class CNContactStore;

@interface _CNChangeHistoryGroupRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2 ;
-(id)objectsRepresentedByBatch:(id)arg1 ;
-(id)fetchGroupsWithIdentifiers:(id)arg1 ;
-(id)updateChanges:(id)arg1 withFetchedGroups:(id)arg2 ;
@end
