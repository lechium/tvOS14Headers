/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactKeyVector, CNMutableContact, NSMutableData;

@interface CNContactBufferDecoder : NSObject {

	BOOL _mutableResults;
	CNContactKeyVector* _keyDescriptorToMakeAvailable;
	long long _state;
	CNMutableContact* _pendingContact;
	NSMutableData* _resumeBuffer;
	long long _bytesNeededToResume;

}

@property (assign,nonatomic) BOOL mutableResults;                                          //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,copy) CNContactKeyVector * keyDescriptorToMakeAvailable;              //@synthesize keyDescriptorToMakeAvailable=_keyDescriptorToMakeAvailable - In the implementation block
@property (readonly) BOOL hasPendingContacts; 
-(id)contactsFromBuffer:(id)arg1 ;
-(CNContactKeyVector *)keyDescriptorToMakeAvailable;
-(BOOL)mutableResults;
-(id)initWithKeyDescriptorToMakeAvailable:(id)arg1 mutableResults:(BOOL)arg2 ;
-(BOOL)hasPendingContacts;
-(void)setMutableResults:(BOOL)arg1 ;
-(void)setKeyDescriptorToMakeAvailable:(CNContactKeyVector *)arg1 ;
@end
