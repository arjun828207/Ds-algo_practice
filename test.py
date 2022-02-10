from email.mime.text import MIMEText
from email.mime.image import MIMEImage
from email.mime.application import MIMEApplication
from email.mime.multipart import MIMEMultipart
import smtplib
import os

# initialize connection to our
# email server, we will use gmail here
smtp = smtplib.SMTP('smtp.gmail.com', 587)
smtp.ehlo()
smtp.starttls()

# Login with your email and password
smtp.login('dsfdsf@gmail.com', 'password')

to = ['dfsaf@gmail.com',
	'dsfds.8936@outlook.com','dsfdsafdaf@gmail.com',]

fName=['dsfds','cxfxcf','cxvz']
lName=['wer','qweqw','heet']
companyName=['heeta technologies','heesoft','heetech']

if(not((len(fName)==len(lName)) and (len(fName)==len(companyName)))):
	exit()


# send our email message 'msg' to our boss
for index in range(0,len(to)):
	if(companyName[index]=='Google' or companyName[index]=='google'):
		exit()
	def message(subject="Python Notification",
			text="",
			attachment=None):
		print("Trying to send message to " + to[index])
	# build message contents
		msg = MIMEMultipart()
		
		# Add Subject
		msg['Subject'] = subject
		
		# Add text contents
		msg.attach(MIMEText(text))
		# We do the same for
		# attachments 
		if attachment is not None:
			
			# Check whether we have the
			# lists of attachments or not!
			if type(attachment) is not list:
				
				# if it isn't a list, make it one
				attachment = [attachment]

			for one_attachment in attachment:

				with open(one_attachment, 'rb') as f:
					
					# Read in the attachment
					# using MIMEApplication
					file = MIMEApplication(
						f.read(),
						name=os.path.basename(one_attachment)
					)
				file['Content-Disposition'] = f'attachment;\
				filename="{os.path.basename(one_attachment)}"'
				
				# At last, Add the attachment to our message object
				msg.attach(file)
		return msg

	fullName=fName[index]+" "+lName[index]
	# Call the message function
	msg = message("sde in "+companyName[index]+"for hiring", "Hi "+fullName+" did my mai go to you!",r"E:\study\documents\ArjunPandey.pdf")
    
	# Make a list of emails, where you wanna send mail
	# Provide some data to the sendmail function!
	smtp.sendmail(from_addr="arjunpandey.lpu@gmail.com",
				to_addrs=to[index], msg=msg.as_string())
	print("Email Sent to " + to[index])
# Finally, don't forget to close the connection
smtp.quit()

