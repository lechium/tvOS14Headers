//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HBCollectionChangeSetComparator : NSObject
{
}

+ (id)_movedIdentifiersWithSourceIdentifiers:(id)arg1 destinationIdentifiers:(id)arg2;	// IMP=0x0000000100079c2c
+ (id)_indexByIdentifierDictionaryWithIdentifiers:(id)arg1;	// IMP=0x0000000100079ab8
+ (id)_identifiersWithObjects:(id)arg1 identifierBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100079864
+ (id)_changeSetWithSourceObjects:(id)arg1 destinationObjects:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3 isEqualBlock:(CDUnknownBlockType)arg4 updateChangeSetBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000100078d58
+ (id)changeSetFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3 updateChangeSetBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100078cb0
+ (id)changeSetFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3 isEqualBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100078c08
+ (id)changeSetFromObjects:(id)arg1 toObjects:(id)arg2;	// IMP=0x0000000100078b80

@end

