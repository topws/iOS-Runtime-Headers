/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABOrganizationNameContactPredicate : CNPredicate <CNiOSContactPredicate> {
    NSString * _organizationName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *organizationName;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id*)arg3 options:(unsigned int)arg4 error:(struct __CFError {}**)arg5;
- (BOOL)cn_supportsNativeSorting;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrganizationName:(id)arg1;
- (id)organizationName;

@end